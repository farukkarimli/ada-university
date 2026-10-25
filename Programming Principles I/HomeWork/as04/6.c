#include <stdio.h>

int main(void) {
    int N;

    printf("Enter N (0 < N < 10): ");
    scanf("%d", &N);

    while (N <= 0 || N >= 10) {
        printf("Error! Enter a number from 1 to 9: ");
        scanf("%d", &N);
    }

    printf("  * |");
    for (int j = 1; j <= N; j++)
        printf("%4d", j); //%4 means 4 spaces have to be inserted 
    printf("\n");

    for (int i = 1; i <= N; i++) {
        printf("%3d |", i);
        for (int j = 1; j <= N; j++)
            printf("%4d", i * j);
        printf("\n");
    }

    return 0;
}