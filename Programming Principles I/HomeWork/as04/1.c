#include <stdio.h>

int main(void){

    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    double D;
    printf("Enter D: ");
    scanf("%lf", &D);

    puts("");

    for(int i = 1; i <= 2 * N + 1; i++)
    {
        printf("%lf\n", D);
    }

    return 0;
}