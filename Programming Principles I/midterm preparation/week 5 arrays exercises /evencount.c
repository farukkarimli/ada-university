#include <stdio.h>

int main(void){
    int a[8] = {4, 7, 10, 3, 6, 6, 1, 12};
    int count = 0;

    for(int i = 0; i < 8; i++){
        if(a[i] % 2 == 0){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}