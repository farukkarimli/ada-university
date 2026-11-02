#include <stdio.h>

int main(void) {
    int terms;
    double factorial = 1.0;
    double e = 1.0;
    
    printf("Enter the number of terms to estimate e: ");
    scanf("%d", &terms);

    for(int i = 1; i < terms; i++)
    {
        factorial *= i;
        double currentTerm = 1.0 / factorial;
        e += currentTerm;
    }
   
    
    printf("The estimated value of e is %lf", e);

    return 0;
}
    
