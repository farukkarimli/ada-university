#include <stdio.h>

int main(void) {
    int x, y, z;
    printf("Enter x, y, and z consecutively: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x < y + z && y < x + z && z < x + y)
    {
        puts("These sides can form a triangle");
    }else
    {
        puts("These sides can not form a triangle");
    }
    return 0;
}
    
