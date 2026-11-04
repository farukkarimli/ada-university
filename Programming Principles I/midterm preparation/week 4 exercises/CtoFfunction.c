#include <stdio.h>

double celcius_to_fahrenheit(double C){
    return C * 9 / 5 + 32;
}

int main(void){
    printf("%.1lf", celcius_to_fahrenheit(100));
    return 0;
}