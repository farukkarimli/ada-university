#include <stdio.h>

int main() {
    int i, j, spaces, stars;

    for (i = 1; i <= 9; i++) {
        if (i <= 5) {
            spaces = 5 - i;
        } else {
            spaces = i - 5;
        }

        stars = 9 - 2 * spaces;

        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }

        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
