/*
    WAP to give grades to a student

    marks < 30 si C

    30 <= marks < 70 is B

    70 <= marks < 90 is A

    90 <= marks < 100 is A+
*/

#include<stdio.h>

int main() {
    int marks;

    printf("enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 90 && marks < 100){
        printf("your grade is A+");
    }else if(marks >= 70 && marks < 90) {
        printf("your grade is A");
    }else if(marks >= 30 && marks < 70) {
        printf("your grade is B");
    }else if(marks < 30){
        printf("your grade is C");
    }else{
        printf("your grade is shit");
    }
    return 0;
}