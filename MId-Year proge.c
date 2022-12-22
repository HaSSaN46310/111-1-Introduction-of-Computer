#include <stdio.h>

int main()
{
	int i, N, x, max, min;
	
	scanf("%d", &N);
	scanf("%d", &x);
	
	max = min = x;
	
	for(i = 1; i < N; i++)
	{
		scanf("%d", &x);
		if(max < x)
		{
			max = x;
		}
		
		if(min > x)
		{
			min = x;
		}
	}
	
	printf("%d %d\n", max, min);
}