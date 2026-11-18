#include <stdio.h>

/* function prototypes are here */
bool isValidSchoolEmail(const char str[]);

int main()
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */
	
	/* Test Cases: */
	printf("%d\n", isValidSchoolEmail("emil@ada.edu.az"));		// true (1)
	printf("%d\n", isValidSchoolEmail("tofig@qu.edu"));			// true (1)
	printf("%d\n", isValidSchoolEmail("gulam@qu.edudd"));		// false (0)
	printf("%d\n", isValidSchoolEmail("to@qu.edu"));			// false (0)
	printf("%d\n", isValidSchoolEmail("to?fig@qu.edu"));		// false (0)
	printf("%d\n", isValidSchoolEmail("eabbasov2019@ada.edu.tr")); // true (1)
	printf("%d\n", isValidSchoolEmail("eabbasov2019ada.edu.tr")); // false (0)

	return 0;
}

// You fill in here