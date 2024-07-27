// write a program to print the smallest number

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("enter three number: \n", a, b, c);
    scanf("%d%d%d", &a, &b, &c);

    if(a<b && a<c){
        printf("the smallest number is %d\n", a);
    }else if(a<b && a<c){
        printf("the smallest number is %d\n", b);
    }else{
        printf("the smallest number is %d\n", c);
    }

    return 0;
}