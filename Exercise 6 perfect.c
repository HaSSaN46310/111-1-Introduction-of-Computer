#include <stdio.h>

int isPerfect(int n)
{
	int d, sum;
	
	for(sum = 0, d = 1; d < n; d++)
	{
		if(n % d == 0)
		{
			sum += d;
		}
	}
	
	return sum == n;
}

int main()
{
	int a, b, k, cnt;
	
	scanf("%d %d", &a, &b);
	
	for(cnt = 0, k = a; k <= b; k++)
	{
		if(isPerfect(k))
		{
			cnt++;
		}
	}
	
	printf("%d\n", cnt);
}