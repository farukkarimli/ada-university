#include <stdio.h>

int sum_to(int n){
    if(n == 0){
        return 0;
    }
    printf("%d ", n);
    return n + sum_to(n-1);
}

int main(void){
    printf("%d", sum_to(4));
    return 0;
}