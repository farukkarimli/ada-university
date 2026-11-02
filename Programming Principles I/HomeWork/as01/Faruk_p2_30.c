#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a 5 digit number: ");
    scanf("%d", &n);

    int digit1 = n / 10000;
    int digit2 = (n / 1000) % 10;
    int digit3 = (n / 100) % 100 % 10;
    int digit4 = (n / 10) % 1000 % 100 % 10;
    int digit5 = n % 10;

    printf("%d   %d   %d   %d   %d", digit1, digit2, digit3, digit4, digit5);
    return 0;
}
