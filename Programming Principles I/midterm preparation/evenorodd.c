#include <stdio.h>

int main(void){
    int x;
    printf("Enter the integer: ");
    scanf("%d", &x);

    if(x % 2 == 0){
        printf("x is even");
    }else{
        printf("x is odd");
    }

    return 0;
}