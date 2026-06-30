# Chapter 1.5.3: Line Counting

## Core Objective
* Intercepting special characters before sending them to the output stream and replacing them with plain-text.
* Tracking instances of different characters and formatting duplicate blanks.

## Technical Insights
* **State Tracking Variable** Implemented a state tracking variable to get around the lookahead problem of the `getchar()` function.
* **Swtich Function** Tested and used a switch function to iterate through the different cases, which allows the CPU to create a Jump Table, opposed to the branch prediction that happens in an if-else chain.
