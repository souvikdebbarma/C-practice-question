//write a function that prints namaste if user is indian and bonjour if the user is french

#include <stdio.h>

void indian();
void french();

int main(){
    char locality; 

    char ligma;

    printf("are you indian(I) or french()F ? \n");
    scanf("%c", &locality);

    if(locality == 'i' || locality == 'I'){
        indian();
    }else if(locality == 'f' || locality == 'F'){
        french();
    }else{
        printf("do you know ligma? \n(idk) or (no): ");
        scanf("%d", ligma);
        printf("Ligma Ballzzzzz heheheheheheehheeheh");
    }

    return 0;
}

void indian(){
    printf("Namaste");
}

void french(){
    printf("Bonjour");
}