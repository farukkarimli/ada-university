#include <stdio.h>

int main(void) {
    int n = 1;

    for(int j = 1; j <= 10; j++){
        for(int k = 1; k <= j; k++){
            printf("%d ", n);
            n++;
        }
        puts("");
    }
    return 0;
}
