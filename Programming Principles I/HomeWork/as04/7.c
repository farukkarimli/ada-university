#include <stdio.h>

int main(void) {
    
    int N;

    printf("Enter the number of lines: ");
    scanf("%d", &N);

    int count = 1;                      // hashes on the current line

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < count; j++)
            printf("#");
        printf("\n");

        count = count + i;              // next line gets i more hashes
    }

    return 0;
    
}