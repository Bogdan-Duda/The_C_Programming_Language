# Chapter 1.5.4: Word Counting

## Core Objective
* Create a bare-bones version of the UNIX program wc.
* Use state tracking variables to define boundries between words.

## Technical Insights
* **Symbolic Constants** Defined macros `IN` and `OUT` as `0` and `1` to decouple any constant values from the logic of the code
* **State Tracking Variable** By using the state variable I tracked whenever the `getchar()` function started reading a new word and incremented each instance of it.
