#include <stdio.h>

int index_of_max(int a[], int n){
    int position;
    int max = a[0];

    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
            position = i;
        }
    }

    return position;

}

int main(void){
    int goals[6] = {1, 0, 3, 4, 2, 1};
    printf("%d", index_of_max(goals, 6));
    return 0;

}