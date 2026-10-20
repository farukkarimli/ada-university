#include <stdio.h>

int main() {
    
    int x1, x2, x3, x4, x5;
    
    printf("Enter the number x1: ");
    scanf("%d", &x1);
    printf("Enter the number x2: ");
    scanf("%d", &x2);
    printf("Enter the number x3: ");
    scanf("%d", &x3);
    printf("Enter the number x4: ");
    scanf("%d", &x4);
    printf("Enter the number x5: ");
    scanf("%d", &x5);

    for(int i = 1; i <= x1; i++)
        {
                    printf("*");
        }
    puts("");
    for(int i1 = 1; i1 <= x2; i1++)
        {
                    printf("*");
        }
    puts("");
    for(int i2 = 1; i2 <= x3; i2++)
        {
                    printf("*");
        }
    puts("");
    for(int i3 = 1; i3 <= x4; i3++)
        {
                    printf("*");
        }
    puts("");
    for(int i4 = 1; i4 <= x5; i4++)
        {
                    printf("*");
        }
    
    puts("");

    return 0;
    
}
