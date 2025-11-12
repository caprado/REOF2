#!/usr/bin/env python3
"""
Generate SVG badge for progress tracking.
"""

def generate_progress_badge(categorized: int, total: int, output_path: str):
    """Generate an SVG badge showing progress."""

    percentage = (categorized / total * 100) if total > 0 else 0

    # Determine color based on progress
    if percentage < 25:
        color = "#e05d44"  # red
    elif percentage < 50:
        color = "#fe7d37"  # orange
    elif percentage < 75:
        color = "#dfb317"  # yellow
    elif percentage < 100:
        color = "#a4a61d"  # yellowgreen
    else:
        color = "#4c1"  # brightgreen

    message = f"{categorized}/{total} ({percentage:.1f}%)"

    # Calculate text widths
    label = "Progress"
    label_width = len(label) * 6 + 10
    message_width = len(message) * 6 + 10
    total_width = label_width + message_width

    svg = f'''<svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" width="{total_width}" height="20" role="img" aria-label="{label}: {message}">
    <title>{label}: {message}</title>
    <linearGradient id="s" x2="0" y2="100%">
        <stop offset="0" stop-color="#bbb" stop-opacity=".1"/>
        <stop offset="1" stop-opacity=".1"/>
    </linearGradient>
    <clipPath id="r">
        <rect width="{total_width}" height="20" rx="3" fill="#fff"/>
    </clipPath>
    <g clip-path="url(#r)">
        <rect width="{label_width}" height="20" fill="#555"/>
        <rect x="{label_width}" width="{message_width}" height="20" fill="{color}"/>
        <rect width="{total_width}" height="20" fill="url(#s)"/>
    </g>
    <g fill="#fff" text-anchor="middle" font-family="Verdana,Geneva,DejaVu Sans,sans-serif" text-rendering="geometricPrecision" font-size="110">
        <text aria-hidden="true" x="{label_width/2 * 10}" y="150" fill="#010101" fill-opacity=".3" transform="scale(.1)" textLength="{(label_width-10) * 10}">{label}</text>
        <text x="{label_width/2 * 10}" y="140" transform="scale(.1)" fill="#fff" textLength="{(label_width-10) * 10}">{label}</text>
        <text aria-hidden="true" x="{(label_width + message_width/2) * 10}" y="150" fill="#010101" fill-opacity=".3" transform="scale(.1)" textLength="{(message_width-10) * 10}">{message}</text>
        <text x="{(label_width + message_width/2) * 10}" y="140" transform="scale(.1)" fill="#fff" textLength="{(message_width-10) * 10}">{message}</text>
    </g>
</svg>'''

    with open(output_path, 'w', encoding='utf-8') as f:
        f.write(svg)

    return percentage, color


if __name__ == "__main__":
    import argparse
    import json

    parser = argparse.ArgumentParser(description='Generate progress badge SVG')
    parser.add_argument('--json', required=True, help='Input JSON file from track_progress.py')
    parser.add_argument('--output', default='badge.svg', help='Output SVG file path')

    args = parser.parse_args()

    with open(args.json, 'r') as f:
        data = json.load(f)

    categorized = data['categorized']
    total = data['total_files']

    percentage, color = generate_progress_badge(categorized, total, args.output)
    print(f"Generated badge: {categorized}/{total} ({percentage:.1f}%) - {args.output}")
