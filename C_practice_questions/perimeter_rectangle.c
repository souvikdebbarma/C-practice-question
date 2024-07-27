//WAP to calculate perimeter of rectangle

#include <stdio.h>
#include <stdlib.h>

int main() {
    float length, breadth;
    printf("enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    printf("the perimeter of the rectangle is: %f",  2 * (length + breadth));
    return 0;
}