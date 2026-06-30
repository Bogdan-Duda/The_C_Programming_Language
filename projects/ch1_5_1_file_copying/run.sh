#!/bin/bash

set -e

echo "=== Target: Compiling main.c ==="

gcc -Wall -Wextra -Wpedantic -std=c11 -g main.c -o app

echo "=== Target: Executing Binary ==="
echo "--------------------------------"

if [ -f "app" ]; then
    echo -e "I/O test file" > test_input.txt
    ./app < test_input.txt
    rm test_input.txt
else  
    echo "Compilation failed!"
fi

echo "--------------------------------"
