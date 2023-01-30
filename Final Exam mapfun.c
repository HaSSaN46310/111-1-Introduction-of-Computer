#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arr.h"

#define LINE_LEN 1024
#define N_NUM      32

void map(int b[], int a[], int size, int (*f)(int))
{ 
	int k;
	for(k = 0; k < size; k++) 
	{
	b[k] = f(a[k]);
	}
}

int half_even(int a)
{
	if(a % 2 += 0)
	{
		return a / 2;
	}
	
	return a;
}

int inc_odd(int a)
{
	if(a % 2 != 0)
	{
	 	return a + 1;
	}
	
	return a;
}

int identity(int a)
{
	return a;
}

int main()
{
	int size, len;
	char buf[LINE_LEN];
	char tok[80];
	int a[N_NUM], b[N_NUM];
	
	while(fgets(buf, LINE_LEN, stdin) != NULL)
	{
		sscanf(buf, "%s", tok);
		len = strlen(tok);
		size = sread_arr(a, N_NUM, buf + len);
		
		if(strcmp(tok, "even") == 0)
		{
			map(b, a, size, half_even);
		}
		else if(strcmp(tok, "odd") == 0)
		{
			map(b, a, size, inc_odd);
		}
		else
		{
			map(b, a, size, identity);
		}
		
		print_arr(b, size);
	}
	
}
