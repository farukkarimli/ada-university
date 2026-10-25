#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    int arr[n];
    int sum = 0;
    int average;
    
    for(int i = 0; i < n; i++)
        {
            printf("enter integer %d: ", i);
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
     
    average = sum / n;

    printf("%d %d\n", sum, average);
    return 0;
}
