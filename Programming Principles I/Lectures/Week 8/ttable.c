//count the boxes below 0 and print the row and column of each one 
#include <stdio.h>
#include <string.h>

int main(void){
    int t[3][4] = {
        {3, 5, 8, 4},
        {2, 6, 9, 1},
        {-1, 0, 4, 2}
    };

    int count = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(t[i][j] < 0){
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}