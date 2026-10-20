
#include <stdio.h>

int main() {
    int grade, ok;
    int a = 0, b = 0, c = 0, d = 0, f = 0;

    printf("Enter the letter grades.\n");
    printf("Enter the EOF character to end input.\n");

    while ((grade = getchar()) != EOF) {
        ok = 0;

        if (grade == 'A' || grade == 'a') {
            a++;
            ok = 1;
        }
        if (grade == 'B' || grade == 'b') {
            b++;
            ok = 1;
        }
        if (grade == 'C' || grade == 'c') {
            c++;
            ok = 1;
        }
        if (grade == 'D' || grade == 'd') {
            d++;
            ok = 1;
        }
        if (grade == 'F' || grade == 'f') {
            f++;
            ok = 1;
        }
        if (grade == '\n' || grade == '\t' || grade == ' ') {
            ok = 1;
        }

        if (ok == 0) {
            printf("Incorrect letter grade entered. Enter a new grade.\n");
        }
    }

    printf("\nTotals for each letter grade are:\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("C: %d\n", c);
    printf("D: %d\n", d);
    printf("F: %d\n", f);

    return 0;
}
