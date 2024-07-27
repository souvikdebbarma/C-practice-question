/*
    WAP to check if a student passed or failed.

    marks > 30 is pass
    marks < 30 is fail
*/

#include<stdio.h>

int main() {
    int marks;

    printf("enter your marks: ", marks);
    scanf("%d", &marks);

    if(marks >= 30 && marks <= 100){
        printf("pass\n", marks);
    } else if(marks < 30) {
        printf("fail\n", marks);
    }else{
        printf("wrong marks");
    }

    return 0;
}