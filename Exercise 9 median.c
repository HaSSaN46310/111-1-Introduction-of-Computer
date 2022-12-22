#include <stdio.h>
#include "arr.h"

#define N_NUM 1024

void bubble_sort(int a[], int size)
{
	int pass, L, t;
	
	for(pass = 1; pass < size; pass++)
	{
		for(L = 0; L < size - pass; L++)
		{
			if(a[L] > a[L + 1])
			{
				t = a[L];
				a[L] = a[L + 1];
				a[L + 1] = t;
			}
		}
	}
}

int main()
{
	int size;
	int a[N_NUM];
	
	size = read_arr(a, N_NUM);
	
	if(size > 0)
	{
		bubble_sort(a, size);
		printf("%d\n", a[size / 2]);
	}
}