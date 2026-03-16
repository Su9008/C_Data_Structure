#define _CRT_SECURE_NO_WARNINGS
#include"bubble_sort.h"
#include"swap.h"

int* bubble_sort(int* nums, int numsSize, int* returnSize)
{
	*returnSize = numsSize;
	for (int i = 0; i < numsSize - 1; i++)
	{
		for (int j = 0; j < numsSize - 1 - i; j++)
		{
			if (nums[j] > nums[j + 1]) // > Asc ; < Desc
				swap(&nums[j], &nums[j + 1]);
		}
	}
	return nums;
}
