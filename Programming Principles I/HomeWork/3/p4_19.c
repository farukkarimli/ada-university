#include <stdio.h>

int main() {
    int product, quantity;
    double price;
    double total = 0;

    printf("Enter product number (1-5) and quantity sold.\n");
    printf("Enter 0 as the product number to stop.\n");

    printf("Product number: ");
    scanf("%d", &product);

    while (product != 0) {
        printf("Quantity sold: ");
        scanf("%d", &quantity);

        switch (product) {
            case 1:
                price = 2.98;
                break;
            case 2:
                price = 4.50;
                break;
            case 3:
                price = 9.98;
                break;
            case 4:
                price = 4.49;
                break;
            case 5:
                price = 6.87;
                break;
            default:
                printf("Wrong product number!\n");
                price = 0;
                break;
        }

        total = total + price * quantity;

        printf("Product number: ");
        scanf("%d", &product);
    }

    printf("Total retail value: $%.2f\n", total);

    return 0;
}
