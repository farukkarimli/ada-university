#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define N 5

typedef char BOOL;

BOOL isSymmetricMatrix(int arr[N][N]);

/* NO CHANGES to be done on main!!! */
int main() 
{
	int matrix1 [N][N] = {
		{4, 4, 3, 1, 2},
		{4, 5, 4, 7, 5},
		{3, 4, 5, 6, 8},
		{1, 7, 6, 5, 6},
		{2, 5, 8, 6, 4}
	};

	int matrix2 [N][N] = {
		{4, 4, 3, 1, 2},
		{4, 5, 4, 7, 5},
		{3, 4, 5, 6, 8},
		{1, 7, 6, 5, 6},
		{2, 5, 8, 5, 4}
	};

	printf("%s\n", isSymmetricMatrix(matrix1) ? "true" : "false"); // true
	printf("%s\n", isSymmetricMatrix(matrix2) ? "true" : "false"); // false

	return 0;
}


// You fill in here
BOOL isSymmetricMatrix(int arr[N][N]){
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(arr[j][i] != arr[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}