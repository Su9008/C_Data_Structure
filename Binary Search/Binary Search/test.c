#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include"binary_search.h"
#include"lower_bound.h"
#include"upper_bound.h"

void printArray(int* nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ",nums[i]);
	}
	printf("\n");
}

int main()
{
	int nums[] = { -1,0,3,5,9,12 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int target = 9;
	int index = binary_search(nums, numsSize, target);
	printf("Target: %d\nInt Array: ", target);
	printArray(nums, numsSize);
	printf("Binary search get Index: %d\n", index);
	printf("-------------------------------\n");

	int arr[] = { 1, 2, 4, 4, 4, 6, 7 };
	int target_arr = 4;
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	int lower = lower_bound(arr, arrSize, target_arr);
	printf("\nTarget: %d\nInt Array: ", target_arr);
	printArray(arr, arrSize);
	printf("Lower bound: return index of first element >= target\n");
	printf("Lower bound - Index: %d\n", lower);

	int upper = upper_bound(arr, arrSize, target_arr);
	printf("\nUpper bound: return index of first element > target\n");
	printf("Upper bound - Index: %d\n", upper);
	return 0;
}