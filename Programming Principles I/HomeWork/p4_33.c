#include <stdio.h>

int main() {
    int tens, ones;

    printf("Decimal\tRoman\n");

    for (int i = 1; i <= 100; i++) {
        printf("%d\t", i);

        if (i == 100) {
            printf("C");
        }
        else {
            tens = i / 10;
            ones = i % 10;

            switch (tens) {
                case 1: printf("X"); break;
                case 2: printf("XX"); break;
                case 3: printf("XXX"); break;
                case 4: printf("XL"); break;
                case 5: printf("L"); break;
                case 6: printf("LX"); break;
                case 7: printf("LXX"); break;
                case 8: printf("LXXX"); break;
                case 9: printf("XC"); break;
            }

            switch (ones) {
                case 1: printf("I"); break;
                case 2: printf("II"); break;
                case 3: printf("III"); break;
                case 4: printf("IV"); break;
                case 5: printf("V"); break;
                case 6: printf("VI"); break;
                case 7: printf("VII"); break;
                case 8: printf("VIII"); break;
                case 9: printf("IX"); break;
            }
        }

        printf("\n");
    }

    return 0;
}
