//write a program to check if given character is digit or not

#include <stdio.h>
#include <ctype.h>

int main() {

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isdigit(ch))
    {
        printf("the character '%c' is a digit", ch );
    } else {
        printf("the character '%c' is not a digit", ch);
    }
    

    return 0;
}