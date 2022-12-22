#include <stdio.h>

int arith(char op, int n)
{
	static int x = 0;
	
	switch(op)
	{
		case '+':
		x = x + n;
		break;
		
		case '-':
		x = x - n;
		break;
		
		case '*':
		x = x * n;
		break;
		
		case '/':
		x = x / n;
		break;
		
		case '#':
		x = 0;
		break;	
	}
	
	return x;
}

int main()
{
	char op;
	int n;
	
	while(scanf(" %c %d", &op, &n) == 2)
	{
		printf("%\n", arith(op, n));
	}
}
