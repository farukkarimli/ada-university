#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

#define N 5

typedef char BOOL;

BOOL isCoolMatrix(int arr[N][N]);

/* NO CHANGES to be done on main!!! */
int main() 
{
	int matrix1 [N][N] = {
		{4, 4, 3, 1, 2},
		{2, 5, 4, 7, 5},
		{7, 8, 5, 6, 8},
		{4, 2, 6, 5, 6},
		{7, 3, 2, 1, 4}
	};

	int matrix2 [N][N] = {
		{0, 5, 9, 7, 3},
		{1, 5, 6, 8, 3},
		{4, 7, 5, 9, 3},
		{3, 2, 1, 6, 0},
		{4, 2, 6, 7, 9}
	};

	printf("%s\n", isCoolMatrix(matrix1) ? "true" : "false"); // true
	printf("%s\n", isCoolMatrix(matrix2) ? "true" : "false"); // false

	return 0;
}


// You fill in here
BOOL isCoolMatrix(int arr[N][N]) {
	double average1, average2;
	int sum1 = 0;
	int sum2 = 0;

	for(int i = 0; i < N; i++)
	{
		sum1 += arr[i][i];
	}
	average1 = (double) sum1 / N;

	for(int j = 0; j < N; j++)
	{
		sum2 += arr[j][N - 1 - j];
	}
	average2 = (double) sum2 / N;	

	if(average1 == average2)
	{
		return 1;
	}return 0;
}