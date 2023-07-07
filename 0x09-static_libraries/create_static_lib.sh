#!/bin/bash

# Find all C files in the current directory
c_files=$(find . -name "*.c")

# Loop through each C file and compile it into an object file
for file in $c_files
do
    gcc -c "$file" -o "${file%.c}.o"
done
ar rc liball.a *.o
