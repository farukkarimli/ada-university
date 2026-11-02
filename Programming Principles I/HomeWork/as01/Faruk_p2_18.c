#include <stdio.h>


int main(void){
    int highestRainfall, currentyearRainfall; // in mm
    printf("Enter the highest rainfall and the current year rainfall respectively in mm(for your country): ");
    scanf("%d %d", &highestRainfall, &currentyearRainfall);

    if(currentyearRainfall > highestRainfall){
        puts("Current year rainfall exceeds the highest rainfall");
        highestRainfall = currentyearRainfall;
        printf("The highest rainfall is therefore %dmm", highestRainfall);
    }
    else{
        puts("Current year rainfall doesnt exceed the highest rainfall");
    }
    return 0;
}
