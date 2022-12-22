#include <stdio.h>

#define N_NUM 32

int main()
{
	int i ,n;
	int a[N_NUM];
	
	for(n = 0; scanf("%d", &a[n]) == 1; n++);
	
	for(i = n - 1; i > 0; i --)
	{
		printf("%d", a[i]);
			
		if(n > 0)
		{
			printf("%d\n", a[0]);
		}
	}
	
}