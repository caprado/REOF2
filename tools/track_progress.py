#!/usr/bin/env python3
"""
Progress tracker for REOF2 decompilation project.
Scans extracted C files for categorization tags and generates statistics.
"""

import re
import json
from pathlib import Path
from typing import Dict
from collections import defaultdict

# Tag format: /** @category: core/entry @status: complete @author: username */
TAG_PATTERN = r'/\*\*\s*@category:\s*(\S+)(?:\s+@status:\s*(\S+))?(?:\s+@author:\s*(\S+))?\s*\*/'

class ProgressTracker:
    def __init__(self, root_dir: str):
        self.root_dir = Path(root_dir)
        self.extracted_dir = self.root_dir / "extracted"
        self.src_dir = self.root_dir / "src"
        self.statuses = ["pending", "complete"]

    def _format_category_name(self, category: str) -> str:
        """Convert category tag to human-readable name."""
        if category == "uncategorized":
            return "Uncategorized"

        # Split by / and capitalize each part
        parts = category.split('/')
        if len(parts) == 2:
            parent = parts[0].capitalize()
            child = parts[1].replace('_', ' ').title()
            return f"{parent} - {child}"
        return category.title()

    def scan_extracted_files(self) -> Dict:
        """Scan all extracted .c files for categorization tags."""
        results = {
            "total_files": 0,
            "categorized": 0,
            "by_category": defaultdict(int),
            "by_status": defaultdict(int),
            "files": []
        }

        if not self.extracted_dir.exists():
            print(f"Warning: {self.extracted_dir} does not exist")
            return results

        c_files = sorted(self.extracted_dir.glob("*.c"))
        results["total_files"] = len(c_files)

        for filepath in c_files:
            try:
                with open(filepath, 'r', encoding='utf-8') as f:
                    content = f.read()

                match = re.search(TAG_PATTERN, content)

                file_info = {
                    "filename": filepath.name,
                    "category": None,
                    "status": None,
                    "author": None
                }

                if match:
                    file_info["category"] = match.group(1)
                    file_info["status"] = match.group(2) or "pending"
                    file_info["author"] = match.group(3)
                    results["categorized"] += 1
                    results["by_category"][file_info["category"]] += 1
                    results["by_status"][file_info["status"]] += 1
                else:
                    results["by_category"]["uncategorized"] += 1
                    results["by_status"]["uncategorized"] += 1

                results["files"].append(file_info)

            except Exception as e:
                print(f"Error reading {filepath}: {e}")

        return results

    def generate_report(self, results: Dict) -> str:
        """Generate a human-readable progress report."""
        total = results["total_files"]
        categorized = results["categorized"]
        uncategorized = total - categorized

        percentage = (categorized / total * 100) if total > 0 else 0

        report = []
        report.append("=" * 60)
        report.append("REOF2 DECOMPILATION PROGRESS REPORT")
        report.append("=" * 60)
        report.append("")
        report.append(f"Total Functions: {total}")
        report.append(f"Categorized: {categorized} ({percentage:.1f}%)")
        report.append(f"Uncategorized: {uncategorized}")
        report.append("")
        report.append("-" * 60)
        report.append("BREAKDOWN BY CATEGORY:")
        report.append("-" * 60)

        # Sort categories: uncategorized last, everything else alphabetically
        categories = sorted(results["by_category"].items(),
                          key=lambda x: (x[0] == "uncategorized", x[0]))

        for category, count in categories:
            category_name = self._format_category_name(category)
            pct = (count / total * 100) if total > 0 else 0
            bar = self._progress_bar(count, total, width=30)
            report.append(f"{category_name:30s} {bar} {count:4d} ({pct:5.1f}%)")

        report.append("")
        report.append("-" * 60)
        report.append("BREAKDOWN BY STATUS:")
        report.append("-" * 60)

        for status in ["complete", "pending", "uncategorized"]:
            count = results["by_status"].get(status, 0)
            if count > 0:
                pct = (count / total * 100) if total > 0 else 0
                bar = self._progress_bar(count, total, width=30)
                report.append(f"{status.capitalize():30s} {bar} {count:4d} ({pct:5.1f}%)")

        report.append("")
        report.append("=" * 60)

        return "\n".join(report)

    def _progress_bar(self, value: int, total: int, width: int = 20) -> str:
        """Generate a text progress bar."""
        if total == 0:
            return "[" + " " * width + "]"

        filled = int(width * value / total)
        bar = "█" * filled + "░" * (width - filled)
        return f"[{bar}]"

    def generate_badge_data(self, results: Dict) -> Dict:
        """Generate data for shields.io badge."""
        total = results["total_files"]
        categorized = results["categorized"]
        percentage = (categorized / total * 100) if total > 0 else 0

        # Color based on progress
        if percentage < 25:
            color = "red"
        elif percentage < 50:
            color = "orange"
        elif percentage < 75:
            color = "yellow"
        elif percentage < 100:
            color = "yellowgreen"
        else:
            color = "brightgreen"

        return {
            "schemaVersion": 1,
            "label": "progress",
            "message": f"{categorized}/{total} ({percentage:.1f}%)",
            "color": color
        }

    def save_json_results(self, results: Dict, output_path: str):
        """Save results as JSON for GitHub Actions artifacts."""
        with open(output_path, 'w', encoding='utf-8') as f:
            json.dump(results, f, indent=2)

    def save_badge_json(self, badge_data: Dict, output_path: str):
        """Save badge data as JSON for shields.io endpoint."""
        with open(output_path, 'w', encoding='utf-8') as f:
            json.dump(badge_data, f, indent=2)

def main():
    import argparse
    import sys

    # Fix Windows console encoding
    if sys.platform == 'win32':
        try:
            sys.stdout.reconfigure(encoding='utf-8')
        except AttributeError:
            import codecs
            sys.stdout = codecs.getwriter('utf-8')(sys.stdout.buffer, 'strict')

    parser = argparse.ArgumentParser(description='Track REOF2 decompilation progress')
    parser.add_argument('--root', default='.', help='Root directory of the project')
    parser.add_argument('--json', help='Output JSON file path')
    parser.add_argument('--badge', help='Output badge JSON file path')
    parser.add_argument('--report', help='Output report text file path')

    args = parser.parse_args()

    tracker = ProgressTracker(args.root)
    results = tracker.scan_extracted_files()

    # Print report to console
    report = tracker.generate_report(results)
    print(report)

    # Save JSON results if requested
    if args.json:
        tracker.save_json_results(results, args.json)
        print(f"\nJSON results saved to: {args.json}")

    # Save badge data if requested
    if args.badge:
        badge_data = tracker.generate_badge_data(results)
        tracker.save_badge_json(badge_data, args.badge)
        print(f"Badge data saved to: {args.badge}")

    # Save report to file if requested
    if args.report:
        with open(args.report, 'w', encoding='utf-8') as f:
            f.write(report)
        print(f"Report saved to: {args.report}")

if __name__ == "__main__":
    main()
