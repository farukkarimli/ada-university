#include <stdio.h>

int contains(int a[], int n, int x){

    for(int i = 0; i < n; i++){
        if(a[i] == x){
            return 1;
        }
    }

    return 0;
}

int main(void){
    int goals[6] = {1, 0, 3, 4, 2, 1};

    printf("%d", contains(goals, 6, 1));

    return 0;
}