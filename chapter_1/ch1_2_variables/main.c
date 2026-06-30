#include <stdio.h>

int main (void) {

    float fahrenheit, celsius;
    float lower_temperature, upper_temperature, degree_step;

    lower_temperature = 0;
    upper_temperature = 300;
    degree_step = 20;

    fahrenheit = lower_temperature;
    
    if (printf ("Fahrenheit to Celsius conversion table\n") < 0) { return 1; }

    while (fahrenheit < upper_temperature) {
        
        celsius = 5.0 / 9.0 * (fahrenheit - 32);
        
        if (printf ("%3.0f\t%6.2f\n", fahrenheit, celsius) < 0) { return 1; }
        
        lower_temperature += degree_step;
        fahrenheit = lower_temperature;
    }
    
    return 0;
}
