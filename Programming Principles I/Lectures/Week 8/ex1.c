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
        for(int j = 0; j < COLS; j++)
        {
            printf("arr[%d][%d] = %d", i, j, arr[i][j]);
        }
        
    }
}