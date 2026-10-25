#include <stdio.h>

int main(void) {
    
    int N;
    
    do{
    printf("Enter nonnegative integer N: ");
    scanf("%d", &N);
    }while(N <= 0);

    long long a = 0, b = 1;

    for(int i = 0; i < N; i++)
        {
            printf("%lld ", a);

            long long next = a + b;
            a = b;
            b = next;
        }

    puts("");

    return 0;
}