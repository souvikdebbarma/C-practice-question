//write a program to check vowel and consonent

#include <stdio.h>

int main(){
    char ch;

    printf("enter the alphabet: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
        if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch  == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
            printf("the alphabet is a vowel");
        }else{
            printf("the alphabet is a consonent");
        }
    }else{
        printf("you are a shit!");
    }

    return 0;
    
}