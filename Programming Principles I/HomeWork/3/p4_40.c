#include <stdio.h>

int main() {
    double start = 8300000000.0;
    double population = start;
    double rate = 0.0084;
    double increase;
    int year = 1;
    int doubleYear = 0;

    printf("Year\tPopulation\t\tIncrease\n");

    while (year <= 75 || doubleYear == 0) {
        increase = population * rate;
        population = population + increase;

        if (year <= 75) {
            printf("%d\t%.0f\t%.0f\n", year, population, increase);
        }

        if (doubleYear == 0 && population >= 2 * start) {
            doubleYear = year;
        }

        year++;
    }

    printf("\nThe population doubles in year %d\n", doubleYear);

    return 0;
}
