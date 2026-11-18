#include <stdio.h>

/* function prototypes are here */
bool isValidTime(const char str[]);

int main()
{
	/* You shouldnt need to do any logic in main function. 
	* Your function must satisfy ALL possible test cases below. 
	* You may add your own test cases, but do NOT remove my test cases. */

	/* Test Cases: */
	printf("%d\n", isValidTime("13:45"));		// true
	printf("%d\n", isValidTime("1:45 PM"));		// true
	printf("%d\n", isValidTime("01:45 pm"));	// true
	printf("%d\n", isValidTime("03:40"));		// true
	printf("%d\n", isValidTime("3:40"));		// true
	printf("%d\n", isValidTime("6:20 Am"));		// true
	printf("%d\n", isValidTime("00:00"));		// true
	printf("%d\n", isValidTime("12:00"));		// true

	printf("%d\n", isValidTime("24:00"));		// false
	printf("%d\n", isValidTime("43:45"));		// false
	printf("%d\n", isValidTime("13:30 am"));	// false
	printf("%d\n", isValidTime("1:75 PM"));		// false
	printf("%d\n", isValidTime("1:45 PS"));		// false
	printf("%d\n", isValidTime("111:45 pm"));	// false
	printf("%d\n", isValidTime("03-40"));		// false
	printf("%d\n", isValidTime("3::30"));		// false
	printf("%d\n", isValidTime("6:y0 Am"));		// false
	printf("%d\n", isValidTime("3:30am"));		// false
	printf("%d\n", isValidTime("3:30    am"));	// false
	printf("%d\n", isValidTime("3:30 a  m"));	// false
	printf("%d\n", isValidTime("03:60"));		// false

	return 0;
}

// You fill in here