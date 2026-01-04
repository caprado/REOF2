#!/usr/bin/env python3
"""
Verify function integrity between refactored and extracted code.

Checks:
1. All refactored functions with @status complete have @original tag
2. The referenced @original function exists in extracted/
3. The extracted function only has the category tag added (no other modifications)
4. The extracted function has proper @category @status @author tags
"""

import os
import re
import sys
import json
import argparse
import hashlib
from pathlib import Path
from dataclasses import dataclass
from typing import Optional


@dataclass
class ValidationError:
    file: str
    function: str
    error_type: str
    message: str
    severity: str = "error"  # error, warning


# Categories that don't require refactored code (e.g., PS2 kernel stubs)
SKIP_REFACTOR_CATEGORIES = {
    'ps2-kernel-not-needed',
}


def find_refactored_functions(src_dir):
    """Find all functions in src/ with @status complete."""
    functions = []

    for dirpath, _, filenames in os.walk(src_dir):
        for filename in filenames:
            if not filename.endswith('.c'):
                continue

            filepath = os.path.join(dirpath, filename)
            try:
                with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
                    content = f.read()

                # Find all doc blocks with @status complete
                pattern = r'/\*\*([^*]|\*(?!/))*@status\s+complete([^*]|\*(?!/))*\*/'

                for match in re.finditer(pattern, content, re.DOTALL):
                    doc_block = match.group(0)
                    block_end = match.end()

                    # Extract metadata from doc block
                    original_match = re.search(r'@original\s+(\w+)', doc_block)
                    category_match = re.search(r'@category\s+([^\s\*]+)', doc_block)

                    # Skip functions without @category tag - these are helper functions
                    # that don't map to extracted functions and shouldn't be validated
                    if not category_match:
                        continue

                    # Find the function name after the doc block
                    after_doc = content[block_end:block_end + 500]
                    func_match = re.search(r'^\s*(?:static\s+)?(?:inline\s+)?[\w\*]+\s+(\w+)\s*\(',
                                          after_doc, re.MULTILINE)

                    if func_match:
                        functions.append({
                            'file': filepath,
                            'name': func_match.group(1),
                            'original': original_match.group(1) if original_match else None,
                            'category': category_match.group(1),
                            'doc_block': doc_block
                        })

            except Exception as e:
                print(f"Error reading {filepath}: {e}", file=sys.stderr)

    return functions


def find_extracted_function(extracted_dir, func_name):
    """Find a function in the extracted directory."""
    for dirpath, _, filenames in os.walk(extracted_dir):
        for filename in filenames:
            if not filename.endswith('.c'):
                continue

            filepath = os.path.join(dirpath, filename)
            try:
                with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
                    content = f.read()

                # Look for this function definition
                pattern = rf'^\s*(?:static\s+)?(?:inline\s+)?[\w\*]+\s+{re.escape(func_name)}\s*\('
                if re.search(pattern, content, re.MULTILINE):
                    return filepath, content

            except Exception as e:
                continue

    return None, None


def extract_function_with_doc(content, func_name):
    """Extract a function and its preceding doc block from content."""
    # Find the function definition
    func_pattern = rf'^\s*(?:static\s+)?(?:inline\s+)?[\w\*]+\s+{re.escape(func_name)}\s*\([^)]*\)\s*{{'
    func_match = re.search(func_pattern, content, re.MULTILINE)

    if not func_match:
        return None, None, None

    func_start = func_match.start()

    # Find preceding doc block if any
    before_func = content[:func_start]
    doc_match = re.search(r'/\*\*([^*]|\*(?!/))*\*/\s*$', before_func, re.DOTALL)
    doc_block = doc_match.group(0).strip() if doc_match else None
    doc_start = doc_match.start() if doc_match else func_start

    # Find function end (matching braces)
    brace_start = content.find('{', func_match.start())
    if brace_start == -1:
        return None, None, None

    brace_count = 1
    pos = brace_start + 1

    while pos < len(content) and brace_count > 0:
        if content[pos] == '{':
            brace_count += 1
        elif content[pos] == '}':
            brace_count -= 1
        pos += 1

    func_body = content[brace_start + 1:pos - 1]
    full_func = content[func_match.start():pos]

    return doc_block, full_func, func_body


def get_function_body_hash(content, func_name):
    """Get a hash of the function body (excluding doc comments)."""
    _, _, func_body = extract_function_with_doc(content, func_name)
    if func_body is None:
        return None

    # Normalize whitespace for comparison
    normalized = re.sub(r'\s+', ' ', func_body.strip())
    return hashlib.md5(normalized.encode()).hexdigest()


def check_extracted_tag(doc_block):
    """
    Check if extracted function has proper minimal tag.
    Expected format: /** @category [category] @status complete @author caprado */
    Also accepts format with colons: /** @category: [category] @status: complete @author: caprado */
    """
    if not doc_block:
        return False, "No documentation tag found", None

    # Extract category (accept with or without colon)
    category_match = re.search(r'@category:?\s+(\S+)', doc_block)
    category = category_match.group(1) if category_match else None

    # Check for required components (accept with or without colon)
    has_category = bool(category_match)
    has_status = bool(re.search(r'@status:?\s+complete', doc_block))
    has_author = bool(re.search(r'@author:?\s+\S+', doc_block))

    if not has_category:
        return False, "Missing @category tag", None
    if not has_status:
        return False, "Missing @status complete tag", category
    if not has_author:
        return False, "Missing @author tag", category

    # Check it's a single-line comment (extracted style)
    # Should be like: /** @category ... @status complete @author ... */
    if doc_block.count('\n') > 1:
        return False, "Extracted tag should be single-line format: /** @category ... @status complete @author ... */", category

    return True, None, category


def is_skip_refactor_category(category: Optional[str]) -> bool:
    """Check if a category should skip refactored code verification."""
    if not category:
        return False
    # Check exact match or if it starts with a skip category prefix
    return category.lower() in SKIP_REFACTOR_CATEGORIES


def check_refactored_doc_block(doc_block: Optional[str]) -> list[str]:
    """
    Check if refactored function has proper full documentation block.
    Expected format:
    /**
     * @category [category/subcategory]
     * @status [analyzing|in_progress|complete]
     * @original [original function name]
     * @address [memory address]
     * @description [description]
     * @windows_compatibility [high|medium|low]
     * @author caprado
     */
    """
    errors = []

    if not doc_block:
        return ["No documentation block found"]

    # Required tags for refactored functions
    required_tags = {
        'category': r'@category\s+([^\s\*]+)',
        'status': r'@status\s+(analyzing|in_progress|complete)',
        'original': r'@original\s+(\w+)',
        'address': r'@address\s+(0x[0-9a-fA-F]+|\S+)',
        'description': r'@description\s+(.+?)(?=\n\s*\*\s*@|\n\s*\*/)',
        'windows_compatibility': r'@windows_compatibility\s+(high|medium|low)',
        'author': r'@author\s+(\S+)',
    }

    for tag_name, pattern in required_tags.items():
        match = re.search(pattern, doc_block, re.DOTALL)
        if not match:
            errors.append(f"Missing or invalid @{tag_name} tag")

    # Validate status value
    status_match = re.search(r'@status\s+(\S+)', doc_block)
    if status_match:
        status = status_match.group(1)
        if status not in ['analyzing', 'in_progress', 'complete']:
            errors.append(f"Invalid @status value '{status}' (must be: analyzing, in_progress, or complete)")

    # Validate windows_compatibility value
    compat_match = re.search(r'@windows_compatibility\s+(\S+)', doc_block)
    if compat_match:
        compat = compat_match.group(1)
        if compat not in ['high', 'medium', 'low']:
            errors.append(f"Invalid @windows_compatibility value '{compat}' (must be: high, medium, or low)")

    return errors


def load_baseline_hashes(baseline_file):
    """Load baseline function body hashes."""
    if os.path.exists(baseline_file):
        with open(baseline_file, 'r') as f:
            return json.load(f)
    return {}


def save_baseline_hashes(baseline_file, hashes):
    """Save baseline function body hashes."""
    os.makedirs(os.path.dirname(baseline_file), exist_ok=True)
    with open(baseline_file, 'w') as f:
        json.dump(hashes, f, indent=2)


def verify_functions(src_dir, extracted_dir, baseline_file=None):
    """Main verification logic."""
    errors = []
    warnings = []

    # Find all completed refactored functions
    refactored = find_refactored_functions(src_dir)
    print(f"Found {len(refactored)} completed refactored functions")

    # Load baseline hashes if available
    baseline_hashes = {}
    if baseline_file:
        baseline_hashes = load_baseline_hashes(baseline_file)

    new_hashes = {}

    for func in refactored:
        func_name = func['name']
        original_name = func['original']
        refactored_doc = func['doc_block']

        # Check 1: Validate refactored function doc block format
        doc_errors = check_refactored_doc_block(refactored_doc)
        for err in doc_errors:
            errors.append(ValidationError(
                file=func['file'],
                function=func_name,
                error_type="invalid_refactored_doc",
                message=f"Refactored function '{func_name}': {err}"
            ))

        # Check 2: @original tag exists (only for complete status)
        if not original_name:
            errors.append(ValidationError(
                file=func['file'],
                function=func_name,
                error_type="missing_original",
                message=f"Function '{func_name}' has @status complete but missing @original tag"
            ))
            continue

        # Check 3: Original function exists in extracted/
        extracted_file, extracted_content = find_extracted_function(extracted_dir, original_name)

        if not extracted_file:
            errors.append(ValidationError(
                file=func['file'],
                function=func_name,
                error_type="original_not_found",
                message=f"Original function '{original_name}' not found in extracted/"
            ))
            continue

        # Check 4: Extracted function has proper tag (single-line format)
        doc_block, _, _ = extract_function_with_doc(extracted_content, original_name)
        tag_valid, tag_error, extracted_category = check_extracted_tag(doc_block)

        if not tag_valid:
            errors.append(ValidationError(
                file=extracted_file,
                function=original_name,
                error_type="invalid_extracted_tag",
                message=f"Extracted function '{original_name}': {tag_error}"
            ))

        # Skip further checks for categories that don't need refactored code
        # (e.g., PS2 kernel stubs that won't be ported to Windows)
        if is_skip_refactor_category(extracted_category):
            continue

        # Check 5: Function body hasn't been modified (only tag added)
        current_hash = get_function_body_hash(extracted_content, original_name)

        if current_hash:
            new_hashes[original_name] = current_hash

            if original_name in baseline_hashes:
                if baseline_hashes[original_name] != current_hash:
                    errors.append(ValidationError(
                        file=extracted_file,
                        function=original_name,
                        error_type="extracted_modified",
                        message=f"Extracted function '{original_name}' body has been modified (only tags should be added)"
                    ))

    # Save updated hashes
    if baseline_file:
        # Merge with existing (keep functions we didn't check this time)
        merged_hashes = {**baseline_hashes, **new_hashes}
        save_baseline_hashes(baseline_file, merged_hashes)

    return errors, warnings, new_hashes


def generate_report(errors, warnings):
    """Generate a markdown report."""
    lines = ["## Function Verification Report\n"]

    if not errors and not warnings:
        lines.append("All functions verified successfully.\n")
        return "\n".join(lines)

    # Summary
    lines.append("### Summary")
    lines.append(f"- **Errors:** {len(errors)}")
    lines.append(f"- **Warnings:** {len(warnings)}")
    lines.append("")

    # Errors by type
    if errors:
        lines.append("### Errors\n")

        by_type = {}
        for e in errors:
            by_type.setdefault(e.error_type, []).append(e)

        for error_type, errs in by_type.items():
            type_labels = {
                "missing_original": "Missing @original Tag",
                "original_not_found": "Original Function Not Found",
                "invalid_extracted_tag": "Invalid Extracted Function Tag",
                "invalid_refactored_doc": "Invalid Refactored Function Documentation",
                "extracted_modified": "Extracted Function Modified"
            }

            # Help text for each error type
            type_help = {
                "missing_original": """
**How to fix:** Add `@original func_name` to your refactored function's doc block, where `func_name` is the original function name in `extracted/` (e.g., `func_00100230`).
""",
                "original_not_found": """
**How to fix:** Check that the `@original` tag references a function that exists in the `extracted/` directory. Verify the function name is spelled correctly.
""",
                "invalid_extracted_tag": """
**How to fix:** Add a single-line tag above the original function in `extracted/`:
```c
/** @category game/state @status complete @author caprado */
```
Do NOT modify the function body - only add this tag.
""",
                "invalid_refactored_doc": """
**How to fix:** Ensure your refactored function has all required tags:
```c
/**
 * @category game/state
 * @status complete
 * @original func_00100230
 * @address 0x00100230
 * @description Brief description of what this function does
 * @windows_compatibility high
 * @author caprado
 */
```
- `@status` must be: `analyzing`, `in_progress`, or `complete`
- `@windows_compatibility` must be: `high`, `medium`, or `low`
""",
                "extracted_modified": """
**How to fix:** The extracted function body must remain unchanged. Only the documentation tag should be added. Revert any changes to the function body in `extracted/` and only add the tag line.
"""
            }

            lines.append(f"#### {type_labels.get(error_type, error_type)}\n")

            for e in errs:
                lines.append(f"- **{e.function}** in `{e.file}`")
                lines.append(f"  - {e.message}")
            lines.append("")

            # Add help text once per error type
            if error_type in type_help:
                lines.append(type_help[error_type])
            lines.append("")

    if warnings:
        lines.append("### Warnings\n")
        for w in warnings:
            lines.append(f"- **{w.function}**: {w.message}")
        lines.append("")

    return "\n".join(lines)


def main():
    parser = argparse.ArgumentParser(description='Verify function integrity')
    parser.add_argument('--src', default='src', help='Source directory with refactored code')
    parser.add_argument('--extracted', default='extracted', help='Extracted functions directory')
    parser.add_argument('--baseline', default='.github/data/function_hashes.json',
                        help='Baseline hashes file')
    parser.add_argument('--output', default='verification_report.md', help='Output report file')
    parser.add_argument('--init-baseline', action='store_true',
                        help='Initialize baseline hashes without checking')
    parser.add_argument('--strict', action='store_true', help='Exit with error code on any issues')

    args = parser.parse_args()

    if not os.path.exists(args.src):
        print(f"Source directory not found: {args.src}")
        sys.exit(1)

    if not os.path.exists(args.extracted):
        print(f"Extracted directory not found: {args.extracted}")
        sys.exit(1)

    if args.init_baseline:
        print("Initializing baseline hashes...")
        # Just scan extracted functions and save their hashes
        hashes = {}
        for dirpath, _, filenames in os.walk(args.extracted):
            for filename in filenames:
                if not filename.endswith('.c'):
                    continue
                filepath = os.path.join(dirpath, filename)
                try:
                    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
                        content = f.read()

                    # Find all functions
                    pattern = r'^\s*(?:static\s+)?(?:inline\s+)?[\w\*]+\s+(\w+)\s*\('
                    for match in re.finditer(pattern, content, re.MULTILINE):
                        func_name = match.group(1)
                        h = get_function_body_hash(content, func_name)
                        if h:
                            hashes[func_name] = h
                except Exception as e:
                    print(f"Error processing {filepath}: {e}")

        save_baseline_hashes(args.baseline, hashes)
        print(f"Saved {len(hashes)} function hashes to {args.baseline}")
        return

    print("Verifying functions...")
    errors, warnings, _ = verify_functions(args.src, args.extracted, args.baseline)

    report = generate_report(errors, warnings)

    with open(args.output, 'w') as f:
        f.write(report)
    print(f"Report saved to {args.output}")

    # Print summary
    print(f"\nErrors: {len(errors)}")
    print(f"Warnings: {len(warnings)}")

    if errors:
        print("\nErrors found:")
        for e in errors[:10]:
            print(f"  - {e.function}: {e.message}")
        if len(errors) > 10:
            print(f"  ... and {len(errors) - 10} more")

    if args.strict and errors:
        sys.exit(1)


if __name__ == '__main__':
    main()
