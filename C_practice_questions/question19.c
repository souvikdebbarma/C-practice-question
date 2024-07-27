// write 2 functions- one to print "hello" and secont to print "goodbye"
#include <stdio.h>

void hello();
void goodbye();

int main(){
    
    hello();
    goodbye();

    return 0;
}

void hello(){
    printf("hello\n");

}

void goodbye(){
    printf("goodbye");
}