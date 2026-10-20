#include <stdio.h>

int main() {
    int account;
    double oldLimit, newLimit, balance;

    for (int i = 1; i <= 3; i++) {
        printf("Customer %d\n", i);

        printf("Enter account number: ");
        scanf("%d", &account);

        printf("Enter credit limit before recession: ");
        scanf("%lf", &oldLimit);

        printf("Enter current balance: ");
        scanf("%lf", &balance);

        newLimit = oldLimit / 2;

        printf("Account %d new credit limit: %.2f\n", account, newLimit);

        if (balance > newLimit) {
            printf("Account %d balance EXCEEDS the new credit limit!\n", account);
        }

        printf("\n");
    }

    return 0;
}
