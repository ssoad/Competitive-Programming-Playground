#!/bin/bash

# Define the directory where your books are stored
BOOKS_DIR="Books"
THUMBNAILS_DIR="Thumbnails"
LIST_FILE="book_list.md"

# Create thumbnails directory if it doesn't exist
mkdir -p "$THUMBNAILS_DIR"

# Initialize the markdown file for listing
echo "# List of Books" > $LIST_FILE
echo "Generated on $(date)" >> $LIST_FILE
echo "" >> $LIST_FILE

# Process each PDF in the books directory
for pdf_file in "$BOOKS_DIR"/*.pdf; do
    # Extract the base name of the PDF (e.g., "book1.pdf" -> "book1")
    base_name=$(basename "$pdf_file" .pdf)

    # Replace spaces in the base name with underscores
    base_name=${base_name// /_}
    
    # Generate a thumbnail (first page of the PDF)
    pdftoppm -f 1 -singlefile -jpeg "$pdf_file" "$THUMBNAILS_DIR/$base_name"

    # Convert the output JPEG to a smaller thumbnail
    convert "$THUMBNAILS_DIR/$base_name.jpg" -resize 2000x "$THUMBNAILS_DIR/$base_name-thumbnail.jpg"

    # Remove the intermediate full-size image
    rm "$THUMBNAILS_DIR/$base_name.jpg"

    # Add an entry to the markdown file
    echo "## $base_name" >> $LIST_FILE
    echo "![Thumbnail](Thumbnails/$base_name-thumbnail.jpg)" >> $LIST_FILE
    echo "" >> $LIST_FILE
done

echo "PDF thumbnails generated and list created in $LIST_FILE."
