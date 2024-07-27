// keep taking numbers as input from the user until user enters a number which is multiple of 7.

#include<stdio.h>

int main(){
    int n;

    do{
        printf("enter the number: ");
        scanf("%d", &n);

        printf("%d\n", n);
        
        if(7 % n == 0){
            printf("the number %d is the multiple of 7\n", n);
            break;
        }
    }while (1);

    printf("thank you");

    return 0;
    
}