#include <stdio.h>
#include "stats.h"

int highest(int a[], int n) {

    int max = a[0];

    for (int i = 1; i < n; i++) {

        if (a[i] > max) {

            max = a[i];

        }

    }

    return max;

}

int count_above(int a[], int n, int limit){

    int count = 0;

    for(int i = 0; i < n; i++){
        if(a[i] > limit){
            count++;
        }
    }
    
    return count;
}

void print_scores(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

double average(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return (double) sum / n;
}