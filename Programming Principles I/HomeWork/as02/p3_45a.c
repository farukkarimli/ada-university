#include <stdio.h>

int main(void) {
    int x;
    int factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &x);
    
    while(x < 0){
        printf("Enter a positive integer: ");
        scanf("%d", &x);
    }
    if(x == 0){
        factorial == 1;
    }else
    {
        for(int i = 1; i <= x; i++)
        {
            factorial *= i;
        }
    }

    printf("The factorial fo your number is %d\n", factorial);

    return 0;
}
