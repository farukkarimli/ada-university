#include <stdio.h>
#include <time.h>

int main(void) {
    
    int x = time(NULL) % 30 - 11;   // secret number in [-11, 18]
    int guess;
    int count = 0;

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        count++;

        if (guess > x) {
            printf("Nope! Try smaller\n");
        } else if (guess < x) {
            printf("Nope! Try bigger\n");
        } else {
            printf("Now you got it!\n");
            printf("Total guesses you did to win: %d\n", count);
            break;
        }
    }

    return 0;
}