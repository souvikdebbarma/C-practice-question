//write a program to check if a number is divisible by 2 or not

#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Enter an value: ", x);
    scanf("%d", &x);

    printf("value: %d", x % 2 == 0);

    return 0;
}