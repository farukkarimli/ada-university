#include <stdio.h>

int main(void) {
    int num;

    printf("Enter 4-digit number: ");
    scanf("%d", &num);

    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    int temp = d1;
    d1 = d3;
    d3 = temp;

    temp = d2;
    d2 = d4;
    d4 = temp;

    printf("Encrypted number: %d%d%d%d\n", d1, d2, d3, d4);

    return 0;
}
