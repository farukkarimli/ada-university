#include <stdio.h>

// swap(???) 
void swap(int *a, int *b);

int main() 
{
	int a = 5, b = 7;
	// swap a and b?
	swap(&a, &b);

	printf("%d %d", a, b);

	return 0;
}


// You fill in here
void swap(int *a, int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}