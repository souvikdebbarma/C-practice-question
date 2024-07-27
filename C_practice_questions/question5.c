/*
    print 1(true) or 0(false) for following statement
        a. if it's sunday and it's snowing -> true
        b. if it's monday or it's raining -> true
        c. if a number is greater than 9 & less than 100 -> true
        (2 digt number)
*/

#include <stdio.h>
#include <math.h>

int main() {
    int isSunday = 1;
    int isSnowing = 1;

    printf("%d", isSunday && isSnowing);

    int isMonday = 1;
    int isRaining = 0;
    printf("%d", isMonday || isRaining);

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d", 9>num && num<100);

    return 0;

}