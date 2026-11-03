#include <stdio.h>

int main(void){
    int n, value;
    int count = 0;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Enter the value %d: ", i);
        scanf("%d", &value);
        if(value > 0){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

    