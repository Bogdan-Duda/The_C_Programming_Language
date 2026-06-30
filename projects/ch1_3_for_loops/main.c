#include <stdio.h>

#define START_TEMP 300.0f
#define STEP 20.0f

int main (void) {

    float celsius;

    for (float fahrenheit = START_TEMP; fahrenheit >= 0; fahrenheit -= STEP) {
    
        celsius = (5.0 / 9.0)*(fahrenheit - 32);
        if (printf ("%3.0f\t%6.1f\n", fahrenheit, celsius) < 0) { return 1; }
  
    }
    
    return 0;
}
