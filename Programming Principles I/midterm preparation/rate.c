#include <stdio.h>

int main(void){
    int hours;
    double rate, payment;
    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    if(hours <= 40){
        payment = hours * rate;
    }else{
        payment = 40 * rate + (hours - 40) * rate * 1.5;
    }

    printf("%.2lf", payment);

    return 0;
}
