#include <stdio.h>

int main(void){
    
    double totalCollected;
    char monthName[15];
    double sales;
    double countyTax;
    double stateTax;
    double totalTax;

    while(1){
        printf("Enter the total amount collected in dollars:");//in dollars
        scanf("%lf", &totalCollected);
        
        if(totalCollected == -1)
        {
           break;
        }
        
        printf("Enter name of month: ");
        scanf("%s", &monthName);
        
        sales = totalCollected / 1.09;
        countyTax = sales * 0.05;
        stateTax = sales * 0.04;
        totalTax = countyTax + stateTax;

        printf("Total Collection: $ %.2lf\n", totalCollected);
        printf("Sales: $ %.2lf\n", sales);
        printf("County Sales Tax: $ %.2lf\n", countyTax);
        printf("State Sales Tax: $ %.2lf\n", stateTax);
        printf("Total Sales Tax Collected: $ %.2lf\n\n", totalTax);
}
    return 0;
} 
