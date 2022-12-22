#include <stdio.h>
#include <string.h>
#include "arr.h"

#define STR_LEN 256

void count(int a[], char *to_count, char *counted)
{
	int i;
	char *s, cnt[256] = {0};
	
	for(s = counted; *s; s++)
	{
		cnt[*s]++;
	}
	
	for(i = 0, s = to_count; *s; s++, i++)
	{
		a[i] = cnt[*s];
	}
}

int main()
{
	int size;
	int val[STR_LEN];
	char to_count[STR_LEN], counted[STR_LEN];
	
	while(scanf("%s %s", to_count, counted) == 2)
	{
		size = strlen(to_count);
		count(val, to_count, counted);
		print_arr(val, size);
		
	}
}