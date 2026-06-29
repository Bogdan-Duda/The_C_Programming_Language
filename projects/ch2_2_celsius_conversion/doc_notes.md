# Chapter 1.2: Fahrenheit to Celsius

## Core Objective
* Validate insights gained on variables and arithmetic operations
* Experiment with output formatting using the printf function

## Technical Insights
* **Output Formatting** Used `%f` to signal the output of a float variable, with the additional output information using the following format `%<width>.<precision>f`.
* **Defensive Engineering:** Intercepted the `printf` execution path by checking if the return value is `< 0`. Since `printf` returns a negative value (`EOF`) upon encountering an internal stream write failure, this check guards against silent system-level I/O corruption.
* **System Boundary Return:** Returned `0` at termination to signal a flawless exit status back to the parent shell process.

## System Verification
* **Compiler Invocation:** `gcc -Wall -Wextra -Wpedantic -std=c11 -g main.c -o app`
* **Execution Verification:** Run via automated `run.sh` script. The process successfully caught the output stream and exited with status code `0`.
