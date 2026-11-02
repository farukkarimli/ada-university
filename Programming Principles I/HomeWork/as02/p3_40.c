#include <stdio.h>

int main(void) {
    int x = 3;
    while(1)
    {
        printf("%d\n", x);
        x = x * 3;
    }

    return 0;
}

//Because standard integers have a maximum size limit, multiplying by 3 forever causes the variable to overflow into negative numbers and print wrong values endlessly.
