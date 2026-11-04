#include <stdio.h>

int cube(int x){
    return x * x * x;
}

int main(void){
    printf("%d", cube(3));
    return 0;
}

