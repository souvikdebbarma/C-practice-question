// x = 4 * 3 / 6 *2

#include <stdio.h>
#include <math.h>

int main() {
    int x = 4 * 3 / 6 * 2;
    printf("the value is: %d", x);

    return 0;
}

/*
    by using operator precedence
    1. multiplication and division are executed first (from left to right) because all belong in the same precedece.
        this is known as associativity rule.
    '*' operator is first used which gives the value 12 / 6 * 2
    then the '/' operator is used which gives the output 2 * 2
    so, the answer will be 4
*/