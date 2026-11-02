#include <stdio.h>

int main(void) {
    
    int x = 5;
    int sum;
    
    sum = 10 + x++;
    printf("10 + x++ = %d ", sum);
    printf("(x is now %d)\n\n", x);

   
    x = 5;
    
    sum = 10 + ++x;
    printf("10 + ++x = %d ", sum);
    printf("(x is now %d)\n\n", x);

    return 0;
}
