#include <stdio.h>

int main (void) {
    
    int character, last_was_space = 0;
    int blanks = 0, tabs = 0, newlines = 0;

    while ((character = getchar()) != EOF) {

        switch (character) {

            case ' ' : {
                blanks++;
                if (!last_was_space) {
                    putchar(' ');
                    last_was_space = 1;
                }
                break;
            }

            case '\t' : {

                tabs++;
                putchar('\\');
                putchar('t');
                last_was_space = 0;
                break;
            }

            case '\n' : {

                newlines++;
                putchar('\\');
                putchar('n');
                last_was_space = 0; 
                break;
            }

            case '\b' : {

                putchar('\\');
                putchar('b');
                last_was_space = 0; 
                break;
            }

            default : { 
                putchar (character); 
                last_was_space = 0;
                break;
            }
        }

    }
        
    if (printf ("\nblanks: %d\ntabs: %d\nnewlines: %d\n", blanks, tabs, newlines) < 0) { return 1; }

    return 0;
}
