#include <stdio.h>

int main(void) {
    int x;
    int isPrime = 1;
    
    printf("Enter an integer greater than 1: ");
    scanf("%d", &x);

    if(x <= 1)
    {
        isPrime = 0;
        printf("Enter an integer greater than 1\n");
    }else{
        for(int i = 2; i < x/2; i++){
        if(x % i == 0)
        {
            isPrime = 0;
        }else
        {
            isPrime = 1;
        }
        }
    }

    if(isPrime == 1){
        printf("The number %d is prime", x);
    }
    if(isPrime == 0)
    {
        printf("The number %d is not prime", x);
    }
    return 0;
}
