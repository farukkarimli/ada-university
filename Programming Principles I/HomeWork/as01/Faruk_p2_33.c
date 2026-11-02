#include <stdio.h>

int main(void) {
    double miles, gasPrice, mpg, parking, tolls;

    printf("Enter total miles driven per day: ");
    scanf("%lf", &miles);

    printf("Enter cost per gallon of gasoline in dollars: ");
    scanf("%lf", &gasPrice);

    printf("Enter average miles per gallon: ");
    scanf("%lf", &mpg);

    printf("Enter parking fees per day: ");
    scanf("%lf", &parking);

    printf("Enter tolls per day: ");
    scanf("%lf", &tolls);

    double fuelCost = (miles / mpg) * gasPrice;
    double dailyCost = fuelCost + parking + tolls;

    printf("Your daily driving cost is: $%.2f\n", dailyCost);

    return 0;
}
