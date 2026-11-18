#include <stdio.h>

#define N 1000 // enough length for testing

/* function prototypes are here */
void extractText(char dst[], const char src[]);

int main()
{
	char result [N];

	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */

	/* Test Cases: */
	extractText(result, "He had 3 friends back in 2012.");
	printf("%s\n", result); //He had friends back in.

	extractText(result, "4 Friends + 4 emenies equals at least 5 Friends");
	printf("%s\n", result); //Friends + enemies equals at least Friends

	return 0;
}

// You fill in here