#!/bin/bash

set -e

echo "=== Target: Compiling main.c ==="

gcc -Wall -Wextra -Wpedantic -std=c11 -g main.c -o app

echo "=== Target: Executing Binary ==="
echo "--------------------------------"
./app
echo "--------------------------------"
