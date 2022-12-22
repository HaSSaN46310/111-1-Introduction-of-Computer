#include <stdio.h>

int f(int n);
int g(int n);

int f(int n)
{
	if(n <= 0)
	{
		return 13;
	}
	
	if(n % 2 == 0)
	{
		return f(n / 2) + 3;
	}
	else
	{
		return g(n - 1) + 1;
	}
}

int g(int n)
{
	if(n <= 0)
	{
		return 1;
	}
	
	if(n % 2 == 0)
	{
		return g(n / 2) + 4;
	}
	else
	{
		return f(n - 1) + 2;
	}
}

int main()
{
	int n;
	
	while(scanf("%d", &n) == 1)
	{
		printf("%d\n", f(n));
	}
	

}