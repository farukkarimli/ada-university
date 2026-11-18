#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


/* function prototypes are here */
void convertToHumanTime(const char str[]);

int main()
{
	/* You shouldnt need to do any logic in main function. 
	* Your function must satisfy ALL possible test cases below. 
	* You may add your own test cases, but do NOT remove my test cases. */

	/* Test Cases: */
	convertToHumanTime("13:00");	//  It is 1 o�clock.
	convertToHumanTime("1:00");		//  It is 1 o�clock.
	convertToHumanTime("00:00");	//  It is midnight.
	convertToHumanTime("00:25");	//  It is 25 past midnight.
	convertToHumanTime("23:55");	//  It is 5 to midnight.
	convertToHumanTime("12:00");	//  It is noon.
	convertToHumanTime("14:30");	//  It is half past 2.
	convertToHumanTime("4:10");		//  It is 10 past 4.
	convertToHumanTime("4:40");		//  It is 20 to 5.
	convertToHumanTime("12:15");	//  It is quarter past noon.
	convertToHumanTime("11:45");	//  It is quarter to noon.

	return 0;
}

// You fill in here
void convertToHumanTime(const char date[])
{
    int hour = (date[0] - '0') * 10 + (date[1] - '0');
    int minute = (date[3] - '0') * 10 + (date[4] - '0');

    int nextHour = (hour + 1) % 24;

    // midnight and noon
    if (hour == 0 && minute == 0) {
        printf("It is midnight.\n");
        return;
    }

    if (hour == 12 && minute == 0) {
        printf("It is noon.\n");
        return;
    }

    // exact hours
    if (minute == 0) {
        printf("It is %d o'clock.\n", hour % 12 == 0 ? 12 : hour % 12);
        return;
    }

    // half past
    if (minute == 30) {
        if (hour == 0)
            printf("It is half past midnight.\n");
        else if (hour == 12)
            printf("It is half past noon.\n");
        else
            printf("It is half past %d.\n", hour % 12);

        return;
    }

    // quarter past
    if (minute == 15) {
        if (hour == 0)
            printf("It is quarter past midnight.\n");
        else if (hour == 12)
            printf("It is quarter past noon.\n");
        else
            printf("It is quarter past %d.\n", hour % 12);

        return;
    }

    // quarter to
    if (minute == 45) {
        if (nextHour == 0)
            printf("It is quarter to midnight.\n");
        else if (nextHour == 12)
            printf("It is quarter to noon.\n");
        else
            printf("It is quarter to %d.\n", nextHour % 12);

        return;
    }

    // past
    if (minute < 30) {
        if (hour == 0)
            printf("It is %d past midnight.\n", minute);
        else if (hour == 12)
            printf("It is %d past noon.\n", minute);
        else
            printf("It is %d past %d.\n", minute, hour % 12);
    }

    // to
    else {
        int remaining = 60 - minute;

        if (nextHour == 0)
            printf("It is %d to midnight.\n", remaining);
        else if (nextHour == 12)
            printf("It is %d to noon.\n", remaining);
        else
            printf("It is %d to %d.\n", remaining, nextHour % 12);
    }
}
