#include <stdio.h>
#include "arr.h"

#define N_NUM 32

#define min(a,b) ((a) < (b)? (a): (b))

void min3arr(int m3[], int a[], int size)
{
	int i, m2;
	
	if(size == 0)
	{
		return;
	}
	
	m3[0] = m2 = a[0];
	
	for(i = 1; i < size; i++)
	{
		m3[i] = min(m2, a[i]);
		
		m2 = min(a[i - 1], a[i]);
	}
}

int main()
{
	int n;
	int a[N_NUM];
	int m3[N_NUM];
	
	n = read_arr(a, N_NUM);
	min3arr(m3, a, n);
	print_arr(m3, n);
	
}