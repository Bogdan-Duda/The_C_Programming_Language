#!/bin/bash

set -e

echo "=== Target: Compiling main.c ==="

gcc -Wall -Wextra -Wpedantic -std=c11 -g main.c -o app

echo "=== Target: Executing Binary ==="
echo "--------------------------------"

if [ -f "app" ]; then
    echo -e "Write a   \t\t\t  \n\n    program to \t copy it\bs input \n to \t its output, re\tplacing each         string of \tone or m\nore blanks b\n\t a single b\blank.\n" > test_input.txt
    ./app < test_input.txt
    rm test_input.txt
else 
    echo "Compilation Failed!"
fi

echo "--------------------------------"
