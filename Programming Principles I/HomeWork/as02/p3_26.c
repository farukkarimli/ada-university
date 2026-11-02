#include <stdio.h>

int main(void) {
    int n;
    int largest = 0;
    int secondLargest = 0;
    int counter = 1;

    while(counter <= 10){
        printf("Enter value %d: ", counter);
        scanf("%d", &n);
        if(n > largest){
            secondLargest = largest;
            largest = n;
        }else if(n > secondLargest)
        {
            secondLargest = n;
        }
         counter++;
    }
    printf("The largest 2 numbers are %d and %d\n", largest, secondLargest);
    
    return 0;
}
