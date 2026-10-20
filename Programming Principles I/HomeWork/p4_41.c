#include <stdio.h>

int main() {
    double housing, food, clothing, transportation;
    double education, healthcare, vacations;
    double total, tax23, tax30;

    printf("Enter your yearly expenses.\n");

    printf("Housing: ");
    scanf("%lf", &housing);

    printf("Food: ");
    scanf("%lf", &food);

    printf("Clothing: ");
    scanf("%lf", &clothing);

    printf("Transportation: ");
    scanf("%lf", &transportation);

    printf("Education: ");
    scanf("%lf", &education);

    printf("Health care: ");
    scanf("%lf", &healthcare);

    printf("Vacations: ");
    scanf("%lf", &vacations);

    total = housing + food + clothing + transportation + education + healthcare + vacations;

    tax23 = total * 0.23;
    tax30 = total * 0.30;

    printf("\nTotal expenses: $%.2f\n", total);
    printf("FairTax at 23%% (expenses include the tax): $%.2f\n", tax23);
    printf("FairTax at 30%% (expenses are before tax): $%.2f\n", tax30);

    return 0;
}
