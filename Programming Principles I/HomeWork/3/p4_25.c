#include <stdio.h>

int main() {
    int binary[9];
    int n, k;

    printf("Decimal\tBinary\t\tOctal\tHex\n");

    for (int i = 1; i <= 256; i++) {
        n = i;

        for (k = 0; k < 9; k++) {
            binary[k] = 0;
        }

        k = 0;
        while (n > 0) {
            binary[k] = n % 2;
            n = n / 2;
            k++;
        }

        printf("%d\t", i);

        for (k = 8; k >= 0; k--) {
            printf("%d", binary[k]);
        }

        printf("\t%o\t%X\n", i, i);
    }

    return 0;
}
