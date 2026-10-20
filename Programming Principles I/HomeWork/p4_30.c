#include <stdio.h>

int main() {
    int grade;
    int a = 0, b = 0, c = 0, d = 0, f = 0;

    printf("Enter the letter grades.\n");
    printf("Enter the EOF character to end input.\n");

    while ((grade = getchar()) != EOF) {
        if (grade == 'A' || grade == 'a')
            a++;
        else if (grade == 'B' || grade == 'b')
            b++;
        else if (grade == 'C' || grade == 'c')
            c++;
        else if (grade == 'D' || grade == 'd')
            d++;
        else if (grade == 'F' || grade == 'f')
            f++;
        else if (grade == '\n' || grade == '\t' || grade == ' ')
            ;
        else
            printf("Incorrect letter grade entered. Enter a new grade.\n");
    }

    printf("\nTotals for each letter grade are:\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("C: %d\n", c);
    printf("D: %d\n", d);
    printf("F: %d\n", f);

    return 0;
}//NO FIGURE
