#include <stdio.h>

int main(void) {
    int N;

    printf("Enter odd N (N > 2): ");
    scanf("%d", &N);

    int mid = N / 2;                         // index of the middle row

    for (int r = 0; r < N; r++) {
        int d = r < mid ? mid - r : r - mid; // distance from the middle row
        int k = mid - d;                     // symbols on each side of the center
        char side = (d == 0) ? '*' : '#';    // middle row uses *, others use #

        for (int s = 0; s < d; s++)          // leading blanks
            printf("  ");

        for (int j = 0; j < k; j++)          // left side
            printf("%c ", side);

        printf("*");                         // center column

        for (int j = 0; j < k; j++)          // right side
            printf(" %c", side);

        printf("\n");
    }

    return 0;
}