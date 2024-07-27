/*
    print the sum of first n natural numbers

    also, print in reverse.
*/

#include<stdio.h>

int main(){
    int n;
    
    printf("enter the number: ");
    scanf("%d", &n);

    int i = (n * (n+1)) / 2;

    do{
        printf("the sum is: %d", i);
    }while(i <= n);

    for(i = 0; i <= n; i--){
        printf("%d", i);
    }

    return 0;
}