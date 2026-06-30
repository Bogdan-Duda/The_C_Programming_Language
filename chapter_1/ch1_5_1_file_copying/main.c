#include <stdio.h>

int main (void) {

    int c;
    
    // Read all characters in a file;
    while ((c = getchar()) != EOF) { putchar(c); }
    
    // Verify that the expression getchar() != EOF is 0 or 1;
    if (printf ("%d\t%d\n", getchar() != EOF, getchar() == EOF) < 0) { return 1; }

    // Find the value of EOF
    if (printf ("%d\n", EOF) < 0) { return 1; }

    return 0;
}
