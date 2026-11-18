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
void extractText(char dst[], const char src[])
{
	int i, j = 0;

	for(i = 0; src[i] != '\0'; i++)
	{
		if(src[i] >= '0' && src[i] <= '9')
		{
			if(j > 0 && dst[j - 1] == ' ')
			{
				j--;   // remove the space that came before the digit
			}
			continue;  // skip the digit
		}

		if(src[i] == ' ')
		{
			if(j > 0 && dst[j - 1] != ' ')
			{
				dst[j++] = src[i];
			}
		}
		else
		{
			dst[j++] = src[i];
		}
	}

	if(j > 0 && dst[j - 1] == ' ')
	{
		j--;   // remove a trailing space if there is one
	}

	dst[j] = '\0';
}