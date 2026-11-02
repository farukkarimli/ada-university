#include <stdio.h>

int main(void){
    double grossSales;
    
    while(1)
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &grossSales);
        if(grossSales == -1)
        {
            break;
        }
        double weeklySalary = grossSales * 0.09 + 200;
        printf("Salary is: $%.2lf\n\n", weeklySalary);
    }
    return 0;
} 
