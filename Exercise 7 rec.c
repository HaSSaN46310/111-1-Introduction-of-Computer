#include <stdio.h>

long long fun(int n)
{
	int r;
	
	if(n == 0)
	{
		return 0;
	}
	
	if(n == 1)
	{
		return 1;
	}
	
	if((r = n % 3) == 0)
	{
		return fun(n - 1) + fun(n - 2);
	}
	
	else if (r == 1)
	{
		return fun(n - 1) * fun(n - 2);
	}
	
	else
	{
		return fun(n - 2);
	}
}

int main()
{
	int n;
	
	scanf("%d", &n);
	printf("%lld\n", fun(n));
	
}