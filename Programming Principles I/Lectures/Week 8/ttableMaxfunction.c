//count the largest value 
#include <stdio.h>
#include <string.h>
#define COLS 4
void returnMAX(int arr[][COLS], int r){
       int max = arr[0][0];
    
   for(int i = 0; i < r; i++){
        for(int j = 0; j < COLS; j++){
            if(arr[i][j] > max)
            {
            max = arr[i][j];
            }
        }
    }
    printf("%d", max);
}

int main(void){
    int t[3][COLS] = {
        {3, 5, 8, 4},
        {2, 6, 9, 1},
        {-1, 0, 4, 2}
    };
    
   returnMAX(t, 3);
    return 0;
}