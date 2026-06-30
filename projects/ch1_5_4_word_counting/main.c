#include <stdio.h>

#define IN 1
#define OUT 0


int main (void) {

    int word_count = 0, c, state = OUT;

    while ((c = getchar()) != EOF) {
        
        if (c != ' ' && c != '\n' && c != '\t') {
            
            if (state == OUT) {
                state = IN;
                word_count++;
            }
    
        } else { state = OUT; }

    }

    if (printf ("%d\n", word_count) < 0) { return 1; }

    return 0;
}
