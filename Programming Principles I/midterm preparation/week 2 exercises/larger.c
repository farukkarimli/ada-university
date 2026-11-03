#include <stdio.h>

int main(void){
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    int max = x;
    if(y > x){
        max = y;
    }
    printf("max is %d", max);
    
    return 0;
}