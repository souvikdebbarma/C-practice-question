/*
    write a program to find if a character is entered by use is uppercase or not.
*/

#include<stdio.h>

int main(){

    char ch;
    printf("enter the alphabet:");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("uppercase");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("lowercase");
    }else{
        printf("not an alphabet");
    }

    return 0;
}