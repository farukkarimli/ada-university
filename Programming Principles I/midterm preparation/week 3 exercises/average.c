#include <stdio.h>
#define N 7

int main(void){
    int sum = 0;
    double average;
    double arr[N];

    for(int i = 0; i < N; i++){
        printf("Enter the arr element %d: ", i);
        scanf("%lf", &arr[i]);
    }

    for(int i = 0; i < N; i++){
        printf("%.2lf   ", arr[i]);
        sum += arr[i];
    }
    average = (double) sum / N;
    printf("%.2lf", average);
    
    return 0;
}