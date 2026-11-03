#include <stdio.h>


int main(void){
    int x, y;
    printf("Enter the values for x and y respectively: ");
    scanf("%d %d", &x, &y);
    
    int sum = x + y;
    int product = x * y;
    int difference = x - y;
    int quotient = x / y;
    int remainder = x % y;
    
    printf("%d\n%d\n%d\n%d\n%d\n", sum, product, difference, quotient, remainder);
    return 0;
}
