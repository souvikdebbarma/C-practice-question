// x = 4 + 9 * 10

#include <stdio.h>
#include <math.h>

int main() {
    int x = 4 + 9 * 10;
    printf("the value is: %d", x);

    return 0;
}

/*
by operator precedence
     '*' operator will first be used which will give the value 90
        then '+' operator will be used which will give the value 94
So, the final answer will be 94.
*/