#include <stdio.h>

int main() {
   
    double F;
    
    printf("Temperature in celcius:\t Temperature in fahrenheit:\n");
    
    for(int i = 20; i <= 30; i++)
    {
        F =(double) 9/5 * i + 32;
        printf("%d\t                     %.2lf\n", i, F);
    }
    
    return 0;
    
}
