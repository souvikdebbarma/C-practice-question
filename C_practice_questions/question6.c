// write a program to print average of 4 numbers.

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c; 

    float avg;

    printf("enter the three numbers: \n", a, b, c);
    scanf("%d%d%d", &a, &b, &c);

    avg=(a +b +c) / 3.0;

    printf("the average of the three numbers are: %f\n", avg);

    return 0;
}