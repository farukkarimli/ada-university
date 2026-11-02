#include <stdio.h>

int main(void) {
    for (int x = 100; x <= 999; x++) {
        int digit1 = x / 100;
        int digit2 = (x / 10) % 10;
        int digit3 = x % 10;

        int sum = (digit1 * digit1 * digit1) +
                  (digit2 * digit2 * digit2) +
                  (digit3 * digit3 * digit3);

        if (sum == x) {
            printf("%d is an Armstrong number\n", x);
        }
    }

    return 0;
}
