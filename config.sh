#!/bin/bash

# Prompt for username
read -p "Enter your Git username: " username

# Prompt for email
read -p "Enter your Git email: " email

# Set Git config username
git config --global user.name "$username"

# Set Git config email
git config --global user.email "$email"

echo "Git config username and email set successfully!"