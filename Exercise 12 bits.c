#include <stdio.h>
#include "arr.h"

#define LINE_LEN 1024
#define N_INT    1024

unsigned int arr_to_set(int a[], int size)
{
	int i;
	unsigned int n;
	
	for(n = 0, i = 0; i < size; i++)
	{
		n |= 1<<a[i];
	}
	
	return n;
}

void show_bits(char *title, unsigned n)
{
	int i;
	unsigned int mask;
	
	printf("%s", title);
	for(i = 0, mask = 1<<31; mask; mask >>= 1, i++)
	{
		if(i % 8 == 0)
		{
			putchar(' ');
		}
		
		putchar(mask & n ? '1': '0');
	}
	printf("\n");
}

int main()
{
	int sa, sb;
	unsigned int a, b;
	int seq[N_INT];
	
	while(scanf("%d %d", &sa, &sb) == 2)
	{
		if(sa == 0 && sb == 0)
		{
			break;
		}
		read_arr(seq, sa);
		a = arr_to_set(seq, sa);
		read_arr(seq, sa);
		b = arr_to_set(seq, sb);
		
		show_bits("first  set :", a);
		show_bits("second set :", b);
		show_bits("union      :", a | b);
		show_bits("xor        :", a ^ b);
	}
}