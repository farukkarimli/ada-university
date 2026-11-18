#include <stdio.h>

#define SIZE(a) (int) (sizeof(a) / sizeof(a[0]))

/* function prototypes are here */
int middleAverage(int arr[], int len);

int main() 
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */
	 
	int nums1 [] = {1, 2, 3, 4, 100};
	int nums2 [] = {1, 1, 5, 5, 10, 8, 7} ; 
	int nums3 [] = {-10, -4, -2, -4, -2, 0};
		
	printf("%d\n", middleAverage(nums1, SIZE(nums1))); // 3
	printf("%d\n", middleAverage(nums2, SIZE(nums2))); // 5
	printf("%d\n", middleAverage(nums3, SIZE(nums3))); // -3
	
	return 0;
}


// You fill in here
int middleAverage(int arr[], int len)
{
    int target1 = 0;
    int target2 = 0;
    int max = arr[0];
    int min = arr[0];
    int sum = 0;
    

    for(int i = 0; i < len; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
    for(int i = 0; i < len; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }
    for(int i = 0; i < len; i++)
        {
            if(arr[i] == max)
            {
                target1 = i;
            }
        }
    for(int j = 0; j < len; j++)
        {
            if(arr[j] == min)
            {
                target2 = j;
            }
        }  
    for(int k = 0; k < len; k++)
        {
            if(arr[k] != arr[target1] && arr[k] != arr[target2])
            {
                sum += arr[k];
            }
        }
    return sum / (len - 2);
}