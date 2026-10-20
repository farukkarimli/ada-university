#include <stdio.h>

int main() {
    int paycode;
    double salary, wage, hours, sales, pricePerItem, pay;
    int items;

    printf("Enter paycode (1-4), or -1 to stop: ");
    scanf("%d", &paycode);

    while (paycode != -1) {
        switch (paycode) {
            case 1:
                printf("Enter weekly salary: ");
                scanf("%lf", &salary);
                pay = salary;
                printf("Manager's pay is $%.2f\n", pay);
                break;

            case 2:
                printf("Enter hourly wage: ");
                scanf("%lf", &wage);
                printf("Enter hours worked: ");
                scanf("%lf", &hours);

                if (hours <= 40) {
                    pay = wage * hours;
                } else {
                    pay = wage * 40 + (hours - 40) * wage * 1.5;
                }
                printf("Hourly worker's pay is $%.2f\n", pay);
                break;

            case 3:
                printf("Enter gross weekly sales: ");
                scanf("%lf", &sales);
                pay = 250 + 0.057 * sales;
                printf("Commission worker's pay is $%.2f\n", pay);
                break;

            case 4:
                printf("Enter money paid per item: ");
                scanf("%lf", &pricePerItem);
                printf("Enter number of items produced: ");
                scanf("%d", &items);
                pay = pricePerItem * items;
                printf("Pieceworker's pay is $%.2f\n", pay);
                break;

            default:
                printf("Wrong paycode!\n");
                break;
        }

        printf("\nEnter paycode (1-4), or -1 to stop: ");
        scanf("%d", &paycode);
    }

    return 0;
}
