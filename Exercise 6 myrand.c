#include <stdio.h>

#define N_COUNT 100

int A, B, M, S = 1;

int myrand()
{
	S = (A * S + B) % M;
	
}

int main(void)
{
	int i, v, f1, f2, f3;
	
	f1 = f2 = f3 = 0;
	
	scanf("%d %d %d", &A, &B, &M);
	
	for(i = 0; i < N_COUNT; i++)
	{
		v = myrand() % 3 + 1;
		
		if(v == 1)
		{
			f1++;
		}
		
		if(v == 2)
		{
			f2++;
		}
		
		if(v == 3)
		{
			f3++;
		}
	}
	
	printf("number 1 occures %d times\n", f1);
	printf("number 2 occures &d times\n", f2);
	printf("number 3 occures &d times\n", f3);
	
}