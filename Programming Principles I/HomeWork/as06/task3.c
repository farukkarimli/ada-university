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
int countDistinctVowels(const char str[])
{
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	
	for(int k = 0; str[k] != '\0'; k++)
	{
		if(str[k] == 'a' || str[k] == 'A') a = 1;
		if(str[k] == 'e' || str[k] == 'E') e = 1;
		if(str[k] == 'i' || str[k] == 'I') i = 1;
		if(str[k] == 'o' || str[k] == 'O') o = 1;
		if(str[k] == 'u' || str[k] == 'U') u = 1;						
	}

	return a + e + i + o + u;
}