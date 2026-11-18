#include <stdio.h>

#define N 1000 // enough length for testing

/* function prototypes are here */
void invert(char dst[], const char src[]);

int main()
{
	char result [N];

	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */

	/* Test Cases: */
	invert(result, "Hello World There!");
	printf("%s\n", result); //hELLO wORLD tHERE!

	invert(result, "Salam, Baku.");
	printf("%s\n", result); //sALAM, bAKU.

	invert(result, "HolA OlyA ^^");
	printf("%s\n", result); //hOLa oLYa ^^

	return 0;
}

// You fill in here
void invert(char dst[], const char src[])
{
	int i;

	for(i = 0; src[i] != '\0'; i++)
	{
		if(src[i] >= 'a' && src[i] <= 'z')
		{
			dst[i] = src[i] - ('a' - 'A');  //convert to uppercase
		}else if(src[i] >= 'A' && src[i] <= 'Z')
		{
			dst[i] = src[i] + 'a' - 'A';  //convert to lowercase
		}else{
			dst[i] = src[i]; //no changes
		}
	}
	dst[i] = '\0'; // terminate the destination
}