#include <stdio.h>

int main(void) {
    
    int m, n;

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    while(m > n)
        {
            printf("Wrong input! Please re-enter m and n (m<=n): ");
            scanf("%d %d", &m, &n);
        }

    for( int i = m; i <= n; i++)
        {
            
            if(i % 3 == 0 && i % 7 == 0)
            {
                puts("LoveJava");
            }
            else if(i % 3 == 0)
            {
                puts("Love");
            }
            else if(i % 7 == 0)
            {
                puts("Java");
            }
            else
            {
                printf("%d\n", i);
            }
        }  

    return 0;

}