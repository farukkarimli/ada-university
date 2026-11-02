#include <stdio.h>

int main(void) {
    int x; //12345
    printf("Enter your integer: ");
    scanf("%d", &x);

    int count = 0;

    int digit5 = x % 10; //5
    x = x / 10; //1234

    int digit4 = x % 10; //4
    x = x / 10; //123

    int digit3 = x % 10; //3
    x = x / 10; //12

    int digit2 = x % 10; //2
    x = x / 10; //1

    int digit1 = x % 10; //1

    if(digit1 == 9)
    {
        count++;
    }

    if(digit2 == 9)
    {
        count++;
    }

    if(digit3 == 9)
    {
        count++;
    }

    if(digit4 == 9)
    {
        count++;
    }

    if(digit5 == 9)
    {
        count++;
    }
    
    printf("Your number has %d 9s\n", count);

    return 0;
}
