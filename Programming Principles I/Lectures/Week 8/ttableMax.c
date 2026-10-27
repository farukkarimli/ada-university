//count the largest value in each row
#include <stdio.h>
#include <string.h>

int main(void){
    int t[3][4] = {
        {3, 5, 8, 4},
        {2, 6, 9, 1},
        {-1, 0, 4, 2}
    };

   for(int i = 0; i < 3; i++){
        int max = t[i][0];
        for(int j = 0; j < 4; j++){
            
            if(t[i][j] > max){
                max = t[i][j];
            }
        }
         printf("max for row %d is %d\n", i, max);
    }
   
    return 0;
}