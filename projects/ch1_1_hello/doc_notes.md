# Chapter 1.1: Hello World

## Core Objective
* Verify the integrity of the local compilation environment
* Confirm baseline execution patterns and standard stream output mapping

## Technical Insights
* **Explicit Prototyping:** Used `int main(void)` instead of an empty `()` parameter block. This explicitly tells the compiler that the function takes exactly zero arguments, enforcing strict type-safety checks on the execution stack.
* **Defensive Engineering:** Intercepted the `printf` execution path by checking if the return value is `< 0`. Since `printf` returns a negative value (`EOF`) upon encountering an internal stream write failure, this check guards against silent system-level I/O corruption.
* **System Boundary Return:** Returned `0` at termination to signal a flawless exit status back to the parent shell process.

## System Verification
* **Compiler Invocation:** `gcc -Wall -Wextra -Wpedantic -std=c11 -g main.c -o app`
* **Execution Verification:** Run via automated `run.sh` script. The process successfully caught the output stream and exited with status code `0`.
