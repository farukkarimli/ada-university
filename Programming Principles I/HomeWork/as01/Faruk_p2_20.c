#include <stdio.h>

int main(void){
    int secondsTime;
    printf("Enter the time in seconds: ");
    scanf("%d", &secondsTime);

    int hoursTime = secondsTime / 3600;
    int minutesTime = (secondsTime % 3600)/60;
    int seconds_Time = secondsTime % 3600;

    printf("%d:%d:%d", hoursTime, minutesTime, seconds_Time);
    return 0;
}
   
