/*
Write a program that converts 27 from degrees Fahrenheit F to degrees 
Celsius C using the following formula, and write the result to the screen:
        c = (f-32) / 1.8
*/

#include <stdio.h>
#include <math.h>

int main() {
    double degC, degF;

    degF = 27;

    degC = (degF - 32) / 1.8;

    printf("the value is: %lf\n", degC);

    return 0;
}