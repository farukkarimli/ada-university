#include <stdio.h>

int main(void) {
    int weightInKilograms;
    double heightInMeters;
    double bmi;

    printf("Enter weight in kilograms: ");
    scanf("%d", &weightInKilograms);

    printf("Enter height in meters: ");
    scanf("%lf", &heightInMeters);

    bmi = weightInKilograms / (heightInMeters * heightInMeters);

    printf("\nYour Body Mass Index (BMI) is %.2f\n\n", bmi);

    printf("BMI VALUES\n");
    printf("Underweight:less than 18.5\n");
    printf("Normal:\t\tbetween 18.5 and 24.9\n");
    printf("Overweight:\tbetween 25 and 29.9\n");
    printf("Obese:\t\t30 or greater\n");

    return 0;
}
