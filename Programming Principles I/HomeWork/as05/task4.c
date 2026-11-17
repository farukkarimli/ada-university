#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef char BOOL;

/* function prototypes are here */
BOOL isGreatNumber(int num);

int main (void)
{
	/* You fill in here (use scanf to read input from user) */
	int x;

	printf("Enter the integer: ");
	scanf("%d", &x);
	
	// You fill in here
    for(int i = 1; i <= x; i++)
	{
		if(isGreatNumber(i))
		{
			printf("%d\n", i);
		}
	}

	return 0;
}

// You fill in here
BOOL isGreatNumber(int num){
	int sum = 0;
	
	for(int i = 1; i < num; i++)
	{
		if(num % i == 0)
		{
			sum += i;
		}
	}

	if(sum == num)
	{
		return true;
	} return false;
}