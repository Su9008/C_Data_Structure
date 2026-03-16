#define _CRT_SECURE_NO_WARNINGS
#include"swap.h"

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}