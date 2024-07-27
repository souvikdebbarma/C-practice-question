// write a program to swap the values of 2 variables

#include<stdio.h>

int main(){
    int a, b, temp;

    printf("enter the first value: \n", a);
    scanf("%d", &a);

    printf("enter the second value: \n", b);
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("after swaping the values will be: \n a = %d, b = %d", a, b);

    return 0;
    
}

/*
    will make one temporary variable
    store the value of 'a' in it and then assign the value of 'b' to 'a'.
    after that assign the value stored in temporary variable to 'b'.
*/