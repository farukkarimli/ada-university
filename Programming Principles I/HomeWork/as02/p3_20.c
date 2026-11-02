#include <stdio.h>

int main(void){
    
    int hoursWorked;
    double hourlyRate;

    while(1)
    {
        printf("Enter number of hours worked (-1 to end): ");
        scanf("%d", &hoursWorked);
        
        if(hoursWorked == -1)
        {
            break;
        }

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &hourlyRate);

        double salary;

        if(hoursWorked <= 40)
        {
            salary = hoursWorked * hourlyRate;
        }else if(hoursWorked > 40)
        {
            salary = 40 * hourlyRate + (hoursWorked - 40) * hourlyRate * 1.5;
        }

        printf("Salary is $%.2lf\n\n", salary);
    }
    return 0;
} 
