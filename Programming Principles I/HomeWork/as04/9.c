#include <stdio.h>

int main(void) {

    int N;

    printf("Enter N (1 < N < 10): ");
    scanf("%d", &N);

    for (int r = 1; r <= N; r++) {
        for (int c = 1; c <= 2 * N - 1; c++) {
            int v = (c <= N) ? c : 2 * N - c;   // number belonging to this column

            if (v <= N - r + 1)
                printf("%d   ", v);              // number + 3 spaces
            else
                printf("    ");                 // 4 spaces for a blank cell
        }
        printf("\n");
    }

    return 0;
    
}