#include <stdio.h>

int main(void){
    
    int accountNumber;
    double mortgageAmount;
    double mortgageTerm; //in years
    double interestRate; // as a decimal

    while(1)
    {
        printf("Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);
        if(accountNumber == -1){
            break;
        }
        printf("Enter mortgage amount (in dollars): ");
        scanf("%lf", &mortgageAmount);

        printf("Enter mortgage term (in years): ");
        scanf("%lf", &mortgageTerm);

        printf("Enter interest rate (as a decimal): ");
        scanf("%lf", &interestRate);

        double totalAmountPayable = mortgageAmount * interestRate * mortgageTerm + mortgageAmount;
        double totalMonths = 12 * mortgageTerm;

        double monthlyPayment = totalAmountPayable / totalMonths;

        printf("The monthly payable interest is $ %.2lf\n\n", monthlyPayment);
    }
    return 0;
} 
