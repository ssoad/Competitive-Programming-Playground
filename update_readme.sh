#!/bin/bash

# File to update
README_FILE="README.md"
TOTAL_SOLVED="## Total Problems Solved\n\n"
# Start and end markers for the section to be updated
SECTION_START="## Total Problems Solved"
SECTION_END="## Configuration"


# Count the number of problems solved by .cpp, .java, .py files in each directory
# For each directory, the count is appended to the TOTAL_SOLVED string

for dir in $(ls -d */); do
# if not git directory
    if [ $dir == ".git/" ]; then
        continue
    fi
    dir=${dir%*/}
    total_cpp=$(ls $dir/*.cpp 2>/dev/null | wc -l)
    total_java=$(ls $dir/*.java 2>/dev/null | wc -l)
    total_py=$(ls $dir/*.py 2>/dev/null | wc -l)
    total=$((total_cpp + total_java + total_py))
    if [ $total -gt 0 ]; then
        # TOTAL_SOLVED="$TOTAL_SOLVED- $dir: $total\n"
        # Create with Bold and add hyperlink to the directory
        # Add Unicode Done Symbol
        TOTAL_SOLVED="$TOTAL_SOLVED- [**$dir**](./$dir): $total ✅\n"

    fi
done

# Add Last Updated datetime in Format - Last Updated: DD-MM-YYYY HH:MM:SS
TOTAL_SOLVED="$TOTAL_SOLVED\n\n\nLast Updated: $(date +'%d-%m-%Y %H:%M:%S')\n"




# New content for the section
NEW_CONTENT=$TOTAL_SOLVED

# Use awk to replace the content between the markers
awk -v start="$SECTION_START" -v end="$SECTION_END" -v new_content="$NEW_CONTENT" '
    $0 ~ start { print new_content; in_block=1; next }
    $0 ~ end { in_block=0 }
    !in_block
' $README_FILE > temp && mv temp $README_FILE

echo "README.md updated successfully."
