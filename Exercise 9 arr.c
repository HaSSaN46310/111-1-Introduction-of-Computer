#include <stdio.h>
#include "arr.h"

int read_arr(int a[], int limit)
{
	int n;
	
	for(n = 0; n < limit && scanf("%d", &a[n]) == 1; n++);
	
	return n;
}

void print_arr(int a[], int size)
{
	int i;
	
	for(i = 0; i < size - 1; i++)
	{
		printf("%d ", a[i]);
		
		if(size > 0)
		{
			printf("%d\n", a[size - 1]);
		}
	}
}