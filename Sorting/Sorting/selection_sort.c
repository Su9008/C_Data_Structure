#define _CRT_SECURE_NO_WARNINGS
#include"selection_sort.h"
#include"swap.h"

int* selection_sort(int* nums, int numsSize, int* returnSize)
{
	*returnSize = numsSize;
	for (int i = 0; i < numsSize - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[j] < nums[min]) // < Asc ; > Desc
				min = j;
		}
		if (min != i)
			swap(&nums[i], &nums[min]);
	}
	return nums;
}