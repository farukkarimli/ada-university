#include <stdio.h>

int main(void){
    int sum = 0;
    int value;

    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        sum += value;
    }
    
    printf("%d", sum);

    return 0;
}   
