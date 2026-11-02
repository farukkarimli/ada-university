#include <stdio.h>


int main(void){
    int u, a, t;
    printf("Enter the initial velovity(u), acceleration(a), and time(t) respectively: ");
    scanf("%d %d %d", &u, &a, &t);

    int v = u + a * t;
    int s = u * t + 0.5 * a * t * t;

    printf("%d %d", v, s);
    return 0;
}
