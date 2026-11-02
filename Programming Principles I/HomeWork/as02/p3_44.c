#include <stdio.h>

int main(void) {
    int x, y, z;
    printf("Enter x, y, and z consecutively: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y)
    {
        puts("These sides can form a right triangle");
    }else
    {
        puts("These sides can not form a right triangle");
    }
    return 0;
}
