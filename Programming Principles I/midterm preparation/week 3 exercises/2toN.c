#include <stdio.h>

int main(void){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            printf("%d", i);
        }
    }
    return 0;
}    