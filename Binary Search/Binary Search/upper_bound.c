#define _CRT_SECURE_NO_WARNINGS
#include"upper_bound.h"

int upper_bound(int* nums, int numsSize, int target)
{
	int left = 0;
	int right = numsSize - 1;
	while (left < right)
	{
		int mid = left + (right - left) / 2;
		if (nums[mid] > target)
			right = mid;
		else
			left = mid + 1;
	}
	return left;
}