#include <stdio.h>
#include <stdlib.h>
#include "arr.h"

#define N_NUM 32

int kinf(int a)
{
	if(a > 0)
	{
		if(a % 2 == 0)
		{
		    return 0;
		}
		else
		{
			return 1;
		}
	}
	else if(a == 0)
	{
		retirn 2;
	}
	else
	{
		if(a % 2 == 0)
		{
			return 3;
		}
		else
		{
			return 4;
		}
	}
}

int int_cmp(const void*a, const void *b)
{
	int x, y, kx, ky;
	
	x = *((int *)a);
	y = *((int *)b);
	
	kx = kinf(x);
	ky = kind(y);
	
	return kx == ky? x-y: kx - ky;
	
}

int main()
{
	int num[N_NUJM], k;
	
	k = read_arr(num, N_NUM);
	qsort(num, k, sizeof(int), int_cmp);
	print_arr(num, k);
}
