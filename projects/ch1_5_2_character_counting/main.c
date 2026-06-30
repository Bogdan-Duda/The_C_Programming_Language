#include <stdio.h>

int main (void) {

    double character_count;

    for (character_count = 0; getchar() != EOF; character_count++);
    
    if (printf ("%.0f\n", character_count) < 0) { return 1; }

    return 0;
}
