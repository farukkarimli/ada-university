#include <stdio.h>

int main(void){
    char option;
    double a, b;

    printf("A, S, or M option: ");
    scanf("%c", &option);

    printf("Enter numbers a and b: ");
    scanf("%lf %lf", &a, &b);

    switch(option){
        case 'A':
        printf("%.2lf", a + b);
        break;
        case 'S':
        printf("%.2lf", a - b);
        break;
        case 'M':
        printf("%.2lf", a * b);
        break;
        default:
        printf("wrong input for option");

        return 0;
    }
} 