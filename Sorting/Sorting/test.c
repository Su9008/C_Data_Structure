#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"bubble_sort.h"
#include"selection_sort.h"


int main()
{
	int nums[] = { 64,25,12,22,11 };
	// [11 12 22 25 64] [64 25 22 12 11]
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int* returnSize = (int*)calloc(1, sizeof(int));

	//int* sorted = bubble_sort(nums, numsSize, returnSize);
	int* sorted = selection_sort(nums, numsSize, returnSize);
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", sorted[i]);
	}

	printf("\n");
	return 0;
}