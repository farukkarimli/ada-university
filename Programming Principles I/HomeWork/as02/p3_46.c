#include <stdio.h>

int main(void) {
    double pop;
    double rate;

    printf("Enter current population: ");
    scanf("%lf", &pop);

    printf("Enter growth rate as a decimal: ");
    scanf("%lf", &rate);

    rate = rate / 100.0;

    for (int i = 1; i <= 5; i = i + 1) {
        pop = pop + (pop * rate);
        printf("Year %d: %.0lf\n", i, pop);
    }

    return 0;
}

