#include <stdio.h>

/* function prototypes are here */
int countDistinctVowels(const char str[]);

int main()
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */

	/* Test Cases: */
	printf("%d\n", countDistinctVowels("Hello Love Earth!")); // 3
	printf("%d\n", countDistinctVowels("Be The Change You Wanna See In The World!")); // 5

	return 0;
}

// You fill in here