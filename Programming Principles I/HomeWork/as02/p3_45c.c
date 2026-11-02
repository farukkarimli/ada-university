#include <stdio.h>

int main(void) {
    double exponent;
    int terms;

    printf("Enter the value of x: ");
    scanf("%lf", &exponent);

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    double e_to_x = 1.0;
    double power = 1.0;
    double factorial = 1.0;

    for (int i = 1; i < terms; i++) {
        power = power * exponent;
        factorial = factorial * i;

        double current_term = power / factorial;
        e_to_x = e_to_x + current_term;
    }

    printf("Estimated value of e^%.2lf is %lf\n", exponent, e_to_x);

    return 0;
}
