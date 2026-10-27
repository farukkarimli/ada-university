#include <stdio.h>
#include <string.h>

#define ROWS 2
#define COLS 3
int main(void){
    int arr[2][3] = {
        {0, 1, 2},
        {3, 4, 5}
    };
    
    for(int i = 0; i < ROWS; i++)
    {
        int sum = 0;
        for(int j = 0; j < COLS; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("%d\n", sum);
    }
}