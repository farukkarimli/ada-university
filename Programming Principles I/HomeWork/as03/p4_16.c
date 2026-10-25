#include <stdio.h>

int main() {

    // A
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // B
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // C
    for (int i = 10; i >= 1; i--) {
        for (int k = 1; k <= 10 - i; k++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // D
    for (int i = 1; i <= 10; i++) {
        for (int k = 1; k <= 10 - i; k++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}
