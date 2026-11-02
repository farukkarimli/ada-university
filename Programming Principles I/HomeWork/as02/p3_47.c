#include <stdio.h>

int main(void) {
    int b_month, b_day, b_year;
    int c_month, c_day, c_year;

    printf("Enter birth date (mm dd yyyy): ");
    scanf("%d %d %d", &b_month, &b_day, &b_year);

    printf("Enter current date (mm dd yyyy): ");
    scanf("%d %d %d", &c_month, &c_day, &c_year);

    int age = c_year - b_year;

    if (c_month < b_month) {
        age = age - 1;
    }
    if (c_month == b_month) {
        if (c_day < b_day) {
            age = age - 1;
        }
    }

    int max_rate = 220 - age;
    double min_target = max_rate * 0.50;
    double max_target = max_rate * 0.85;

    printf("Age: %d\n", age);
    printf("Max heart rate: %d\n", max_rate);
    printf("Target heart rate: %.0lf - %.0lf\n", min_target, max_target);

    return 0;
}
