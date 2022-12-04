#include <stdio.h>

int sum(int a, int b, int step)
{
	int sum;
	
	if(a > b || step <= 0)
	{
		return 0;
	}
	
	for(sum = 0; a <= b; a += step)
	{
		sum += a;
		
		return sum;
	}
	
	
	
}

int main()
{
	int a, b, step;
	
	while(scanf("%d %d %d", &a, &b, &step) == 3)
	{
		printf("%d\n", sum(a, b, step));
	}
}