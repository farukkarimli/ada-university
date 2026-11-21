#include <stdio.h>
#include <stdarg.h>

 int max(int count, ...);

int main() 
{
	int m = max(5,   30, 1, 29, 5, 19);
	printf("Max age is: %d.\n", m); // 30		

	//int m = max(3,   12, 12, 11);
	//printf("Max age is: %d.\n", m); // 12

	return 0;
}


// You fill in here
int max(int count, ...){
	va_list args;
	va_start (args, count);

	int largest = va_arg(args, int);

	for(int i = 0; i < count; i++)
	{
		int age = va_arg(args, int);
		if(age > largest)
		{
			largest = age;
		}
	}
	va_end(args);
	return largest;
}