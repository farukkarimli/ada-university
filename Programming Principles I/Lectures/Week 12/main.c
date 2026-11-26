#include <stdio.h>

int main(void){
    char a[5] = {'10', '20', '30', '40', '50'};

    printf("&a[0] = %p\n", &a[0]);
    printf("&a[1] = %p\n", &a[1]);
    printf("&a[2] = %p\n", &a[2]);
    printf("&a[3] = %p\n", &a[3]);

    char *p = &a[0];
    printf("p     = %p\n", p);
    printf("p + 1 = %p\n", p + 1);
        
}