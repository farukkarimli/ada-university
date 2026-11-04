#include <stdio.h>

int main(void){
    int a[6] = {3, 8, 1, 5, 9, 2};
    
    for(int i = 0; i < 6; i++){
        a[i] = 2 * a[i];
    }

    for(int i = 0; i < 6; i++){
        printf("%d   ", a[i]);
    }

    return 0;
}