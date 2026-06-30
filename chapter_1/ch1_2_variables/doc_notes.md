# Chapter 1.2: Variables and Arithmetic Expressions

## Core Objective
* Validate insights gained on variables and arithmetic operations
* Experiment with output formatting using the printf function

## Technical Insights
* **Output Formatting** Used `%f` to signal the output of a float variable, with the additional output information using the following format `%<width>.<precision>f`.
* **Defensive Engineering:** Intercepted the `printf` execution path by checking if the return value is `< 0`. Since `printf` returns a negative value (`EOF`) upon encountering an internal stream write failure, this check guards against silent system-level I/O corruption.
* **System Boundary Return:** Returned `0` at termination to signal a flawless exit status back to the parent shell process.

