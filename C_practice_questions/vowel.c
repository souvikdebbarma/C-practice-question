// WAP to check the vowel and consonent

#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if(ch == 'a' || ch == 'e' || ch=='i' || ch == 'o' || ch =='u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel\n", ch);
        } else {
            printf("%c is a consonent\n", ch);
        }
    }else{
        printf("Invalid character\n");
    }

    return 0;
}