#include <stdio.h>

int main()
{
	int a, b, count;
	
	count = 0;
	
	while(scanf("%d %d", &a, &b) == 2)
	{
		if(a == 0)
		{
			break;
		}
		
		if(b % a == 0)
		{
			count++;
		}
	}
	
	printf("%d\n", count);
	
}