#include <stdio.h>

int main(void){
    int x = 5;
    int y = 8;

    int *p = &x;
    *p = *p + y;
    p = &y;
    *p = 0;

    printf("x = %d, y = %d\n", x, y);
    return 0;
}