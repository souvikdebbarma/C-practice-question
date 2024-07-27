/*
Write a program that computes the (two) roots of the quadratic equation:

ax^2 + bx  +c = 0

where a = 1.2, b = 2.3 and c = −3.4.

Hint: You can hard-code values of a, b and c and then compute and print the two solutions for x, to 5 decimal places.
*/

#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c, x1, x2;

    a = 1.2;
    b = 2.3;
    c = -3.4;

    x1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / 2 * a;

    x2 = (-b - sqrt(pow(b,2) - 4 * a * c)) / 2 * a;

    printf("the two roots of the quadratic equations are: x1 = %lf, x2 = %lf\n", x1, x2);

    return 0;

}