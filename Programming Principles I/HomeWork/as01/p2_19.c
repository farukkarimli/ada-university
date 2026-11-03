#include <stdio.h>


int main(void){
    int x, y, z, smallest, largest;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &x, &y, &z);

    int sum = x + y + z;
    int average = (x + y + z)/3;
    int product = x * y * z;
    
    if(x < y && x < z){
        smallest = x;
    }else if(y < x && y < z){
        smallest = y;
    }else if(z < x && z < y){
        smallest = z;
    }
    if(x > y && x > z){
         largest = x;
    }else if(y > x && y > z){
         largest = y;
    }else if(z > x && z >y){
         largest = z;
    }
    printf("Sum is %d\nAverage is %d\nProduct is %d\nSmallest is %d\nLargest is %d\n", sum, average, product, smallest, largest);
    return 0;
    

}
