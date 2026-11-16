#include <stdio.h>

/* function prototypes are here */
void birthdayInfo(int bday);

int main ()
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */
	
	birthdayInfo(20040410); // Leap Year. Zodiac is Aries.
	birthdayInfo(20031118); // Not Leap Year. Zodiac is Scorpio.

	return 0;
}

// You fill in here