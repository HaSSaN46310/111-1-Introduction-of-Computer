#include <stdio.h>
#include <stdlib.h>

int sread_arr(int a[], int limit, char *s)
{
	int n;
	char *t;
	
	for(n = 0; n < limit; n++)
	{
		a[n] = strtol(s, &t, 10);
		if(s == t)
		{
			break;
		}
		s = t;
	}
	return n;
}
