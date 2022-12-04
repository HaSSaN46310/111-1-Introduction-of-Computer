#include <stdio.h>

int main()
{
	int x;
	int counta, countb, countc;
	
	counta = countb = countc = 0;
	
	while(1)
	{
		scanf("%d", &x);
		
		if(x < 0)
		{
			break;
		}
		
		if(x % 5 == 0)
		{
			counta++;
		}
		
		else if(x % 2 == 0)
		{
			countb++;
		}
		
		else
		{
			countc++;
		}
	}
	printf("number of class A: %d\n", counta);
	printf("number of class B: %d\n", countb);
	printf("number of class C: %d\n", countc);
	
}