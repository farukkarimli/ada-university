#include <stdio.h>

int main(void){
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a; // &a[0]

    for(int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    puts("");

    for(int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, *(p + i));
    }

}