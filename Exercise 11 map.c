#include <stdio.h>
#include <stdlib.h>
#include "arr.h"

#define N_NUM 32

int square(int x)
{
	return x*x;
}

int digit_sum(int n)
{
	int s;
	n = abs(n);
	
	for(s = 0; n; n /= 10)
	{
		s += n % 10;
	}
	
	return s;
}

int identity(int x)
{
	return x;
}

void map(int b[], int a[], int n, int (*f)(int))
{
	int i;
	for(i = 0; i < n; i++)
	{
		b[i] = f(a[i]);
	}
}

int main()
{
	int cmd, n;
	int a[N_NUM];
	int b[N_NUM];
	
	while(scanf(" %c", &cmd) == 1)
	{
		if(cmd == 'q')
		{
			break;
		}
		
		scanf("%d", &n);
		read_arr(a,n);
		
		switch(cmd)
		{
			case 's':
				map(b, a, n, square);
				break;
			case 'd':
				map(b, a, n, digit_sum);
				break;
			default:
				map(b, a, n, identity);
				break;
		}
	}	
	print_arr(b,n);
}