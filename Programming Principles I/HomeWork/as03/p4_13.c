#include <stdio.h>

int main() {
    
    int n;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    int sum = 0, sqSum = 0, cubeSum = 0;

    for(int i = 1; i <= n; i++)
        {
            sum += i;
            sqSum = sqSum + i * i;
            cubeSum = cubeSum + i * i * i;
        }

    printf("sum = %d square sum = %d cube sum = %d", sum, sqSum, cubeSum);
    
    return 0;
}
