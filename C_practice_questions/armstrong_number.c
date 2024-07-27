// WAP to check if a given number is armstrong number or not

#include<stdio.h>
#include<math.h>

int main(){
    int num, orgnum, rem, n = 0;

    float result = 0.0;

    printf("enter the number: ");
    scanf("%d", &num);

    orgnum = num;

    while(orgnum != 0){
        orgnum /= 10;
        n++;
    }

    orgnum = num;

    while(orgnum != 0){
        rem = orgnum % 10;
        result += pow(rem, n);
        orgnum /= 10; 
    }

    if((int)result == num){
        printf("%d is an armstrong number :) ", num);
    }else{
        printf("%d is not an armstrong number :( ", num);
    }

    return 0;
}