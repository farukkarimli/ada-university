#include <stdio.h>

int main() {
    int n, mid, i, j, spaces, stars;

    printf("Enter an odd number of rows (1-19): ");
    scanf("%d", &n);

    while (n < 1 || n > 19 || n % 2 == 0) {
        printf("Wrong number! Enter an odd number between 1 and 19: ");
        scanf("%d", &n);
    }

    mid = (n + 1) / 2;

    for (i = 1; i <= n; i++) {
        if (i <= mid) {
            spaces = mid - i;
        } else {
            spaces = i - mid;
        }

        stars = n - 2 * spaces;

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
