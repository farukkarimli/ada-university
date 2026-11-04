#include <stdio.h>

int sign(int n){
    if(n < 0){
        return -1;
    }else if(n == 0){
        return 0;
    }else{
        return 1;
    }
}

int main(void){
    printf("%d", sign(-7));
    return 0;
}