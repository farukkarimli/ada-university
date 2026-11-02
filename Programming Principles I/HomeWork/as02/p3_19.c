int main(void){
    
    double loanPrincipal;
    double interestRate;
    int daysTotal;
    
    while(1)
    {
        printf("Enter loan principal (-1 to end): ");
        scanf("%lf", &loanPrincipal);
        
        if(loanPrincipal == -1)
        {
            break;
        }
        
        printf("Enter interest rate: ");
        scanf("%lf", &interestRate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &daysTotal);

        double interestCharge = loanPrincipal * interestRate * daysTotal / 365;

        printf("The interest charge is $%.2lf\n\n", interestCharge);
     }
    return 0;
} 
