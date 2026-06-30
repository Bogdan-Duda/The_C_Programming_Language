#include <stdio.h>

int main (void) {

    /* check if printf encounters an error and returns a negative count */
    if ( printf("Hello, world!\n") < 0 ) {
        return 1;
    }

    return 0;
}
