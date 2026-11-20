#include <stdio.h>

int my_strlen(const char []) ;

int main() 
{
	const char str1[] = "Hello Geeky World!";
	const char str2[] = "";
	const char str3[] = "This is a \0 character.";


	printf("The length of str1 is: %d\n\n", my_strlen(str1)); // 18
	printf("The length of str2 is: %d\n\n", my_strlen(str2)); // 0
	printf("The length of str3 is: %d\n\n", my_strlen(str3)); // 10

	return 0;
}


// You fill in here