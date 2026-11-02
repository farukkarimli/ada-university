#include <stdio.h>

int main(void) {
    int encrypted_num;

    printf("Enter 4-digit encrypted number: ");
    scanf("%d", &encrypted_num);

    int d1 = encrypted_num / 1000;
    int d2 = (encrypted_num / 100) % 10;
    int d3 = (encrypted_num / 10) % 10;
    int d4 = encrypted_num % 10;

    int temp = d1;
    d1 = d3;
    d3 = temp;

    temp = d2;
    d2 = d4;
    d4 = temp;

    d1 = (d1 + 3) % 10;
    d2 = (d2 + 3) % 10;
    d3 = (d3 + 3) % 10;
    d4 = (d4 + 3) % 10;

    printf("Decrypted number: %d%d%d%d\n", d1, d2, d3, d4);

    return 0;
}
