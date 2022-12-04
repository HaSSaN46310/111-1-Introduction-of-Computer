#include <stdio.h>

int main()
{
	int a, b, step, k, sum;
	
	while(1)
	{
		scanf("%d %d %d", &a, &b, &step);
		
		if(a > b)
		{
			break;
		}
		
		for(sum = 0, k = 0; k <= b; k += step)
		{
			sum += k;
		}
		
		printf("%d\n", sum);
		
	}
}