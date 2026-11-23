#include <stdio.h>

#define N 5

// copy_array(???) 
void copy_array(const int src[], int dest[], int n);

int main() 
{
	const int src[N] = {5, 2, 4, 1, 9};
	int dst[N];
	//int i;

	// copy_array src into b
	copy_array(src, dst, N);

	
	/* print the new array to check */
	////???
	for(int i = 0; i < N; i++)
	{
		printf("%d ", dst[i]);
	}

	return 0;
}


// You fill in here
void copy_array(const int src[], int dest[], int n){
	const int *s = src;
	int *d = dest;

	for(int i = 0; i < n; i++)
	{
		*d = *s;
		s++;
		d++;
	}
}