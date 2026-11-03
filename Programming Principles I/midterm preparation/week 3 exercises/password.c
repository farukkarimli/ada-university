#include <stdio.h>

int main(void){
    int password = 123;
    int guessPassword;
    
    printf("Guess the password: ");
    scanf("%d", &guessPassword);

    while(guessPassword != password){
        printf("Wrong guess, try again: ");
        scanf("%d", &guessPassword);
    }

    printf("You found it");

    return 0;
}