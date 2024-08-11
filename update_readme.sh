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
    # Check All files recursively in the directory and subdirectories
    # Count the number of files with .cpp, .java, .py extension
    # Append the count to the TOTAL_SOLVED string
    # only append the directory name and the count if the count is greater than 0
    # if the count is 0, then the directory is not appended to the TOTAL_SOLVED string
   # Count the number of files with .cpp, .java, .py extension
    TOTAL_COUNT=$(find $dir -type f \( -name "*.cpp" -o -name "*.java" -o -name "*.py" \) | wc -l)
    if [ $TOTAL_COUNT -gt 0 ]; then
    # Remove the trailing slash from the directory name
        dir=${dir%*/}

        # TOTAL_SOLVED="$TOTAL_SOLVED$dir: $TOTAL_COUNT\n\n"
        TOTAL_SOLVED="$TOTAL_SOLVED- [**$dir**](./$dir): $TOTAL_COUNT ✅\n"
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
