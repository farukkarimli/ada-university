#include <stdio.h>


int main(void){
    int x;
    printf("Enter the integer: ");
    scanf("%d", &x);

    if(x % 2 == 0){
        puts("The number is even");
    }else{
        puts("The number is odd");
    }
    return 0;
}
