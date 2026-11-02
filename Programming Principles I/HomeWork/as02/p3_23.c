#include <stdio.h>

int main(void) {
    int counter = 1;
    int largest = 0;
    int n;

    while(counter <= 10)
    {
        printf("Enter number %d: ", counter);
        scanf("%d", &n);
        
        if(n > largest)
        {
            largest = n;
        }
        counter++;
    }
    printf("The largest number is %d\n", largest);
    return 0;
}
