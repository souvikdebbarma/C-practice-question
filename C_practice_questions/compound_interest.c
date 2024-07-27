// write a program to calculate compound interest.

#include <stdio.h>
#include <math.h>

int main() {
    double principal, time, rate;

    printf("enter the principal amount: \n");
    scanf("%lf", &principal);

    printf("enter time: \n");
    scanf("%lf", &time);

    printf("enter rate: \n");
    scanf("%lf", &rate);

    double compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("the compound interest is: %lf", compound_interest);

    return 0;
}

/*
    formula = principal * pow((1 + rate / 100), time) - principal;
*/