#include <stdio.h>


/* function prototypes are here */
void convertToHumanTime(const char str[]);

int main()
{
	/* You shouldnt need to do any logic in main function. 
	* Your function must satisfy ALL possible test cases below. 
	* You may add your own test cases, but do NOT remove my test cases. */

	/* Test Cases: */
	convertToHumanTime("13:00");	//  It is 1 o’clock.
	convertToHumanTime("1:00");		//  It is 1 o’clock.
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