#include <stdio.h>

int main(void) {
    int x, y;
    printf("Enter x and y respectively: ");
    scanf("%d %d", &x, &y);

    if(x % y == 0){
        puts("x is the multiple of y");
    }else{
        puts("x is not the multiple of y");
    }
    return 0;
}
