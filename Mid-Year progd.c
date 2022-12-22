#include <stdio.h>

int sum(int a, int b, int step)
{
	if(step > 0)
	{
		if(a > b)
		{
			return 0;
		}
		else
		{
			return a + sum(a + step, b, step);
		}
	}
	else if(a < b)
	{
		return 0;
	}
	else
	{
		return a + sum(a + step, b, step);
	}
}

int main()
{
	int a, b, step, v;
	
	scanf("%d %d %d", &a, &b, &step);
	
	if(step == 0 || a <= b && step < 0 || a >= b && step > 0)
	{
		v = 0;
	}
	else
	{
		v = sum(a, b, step);
	}
	
	printf("%d\n", v);
	
}