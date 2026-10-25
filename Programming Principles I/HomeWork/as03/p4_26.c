#include <stdio.h>

int main() {
    double pi = 0;
    int sign = 1;
    int found2 = 0, found3 = 0, found4 = 0, found5 = 0;

    printf("Terms\tPi\n");

    for (int n = 1; n <= 1000000; n++) {
        pi = pi + sign * 4.0 / (2 * n - 1);
        sign = -sign;

        if (n <= 20) {
            printf("%d\t%.6f\n", n, pi);
        }

        if (found2 == 0 && (int)(pi * 100 + 0.5) == 314) {
            found2 = n;
        }
        if (found3 == 0 && (int)(pi * 1000 + 0.5) == 3141) {
            found3 = n;
        }
        if (found4 == 0 && (int)(pi * 10000 + 0.5) == 31415) {
            found4 = n;
        }
        if (found5 == 0 && (int)(pi * 100000 + 0.5) == 314159) {
            found5 = n;
        }
    }

    printf("\nFirst 3.14 after %d terms\n", found2);
    printf("First 3.141 after %d terms\n", found3);
    printf("First 3.1415 after %d terms\n", found4);
    printf("First 3.14159 after %d terms\n", found5);

    return 0;
}
