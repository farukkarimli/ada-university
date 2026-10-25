#include <stdio.h>

int main() {
    double principal = 1000;
    double amount, rate;

    for (int r = 5; r <= 10; r++) {
        rate = r / 100.0;
        amount = principal;

        printf("Interest rate: %d%\n", r);

        for (int year = 1; year <= 10; year++) {
            amount = amount * (1 + rate);
            printf("Year %d: %.2lf\n", year, amount);
        }

        printf("\n");
    }

    return 0;
}
