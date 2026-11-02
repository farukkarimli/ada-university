#include <stdio.h>
#include <math.h>

int main(void) {
    int x; //11010
    printf("Enter the value: ");
    scanf("%d", &x);

    int digit1 = x % 10; //0
    x = x / 10; //1101

    int digit2 = x % 10; //1
    x = x / 10; //110
    
    int digit3 = x % 10; //0
    x = x / 10; //11
    
    int digit4 = x % 10; //1
    x = x / 10; //1
    
    int digit5 = x % 10; //1

    x = digit1 * pow(2, 0) + digit2 * pow(2, 1) + digit3 * pow(2, 2) + digit4 * pow(2, 3) + digit5 * pow(2, 4);

    printf("This is the decimal equivalent of your value %d\n", x);

    return 0;
}
