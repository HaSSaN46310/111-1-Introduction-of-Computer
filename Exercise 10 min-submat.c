#include <stdio.h>

#define N_SIZE 100

int main()
{
	int R, C, r1, c1, r2, c2, r, c, min;
	int m[N_SIZE][N_SIZE];
	
	scanf("%d %d %d %d %d %d", &R, &C, &r1, &c1, &r2, &c2);
	
	for(r = 1; r <= R; r++)
	{
		for(c = 1; c <= C; c++)
		{
			scanf("%d", &m[r][c]);
		}
	}
	
	min = m[r1][c1];
	
	for(r = r1; r <= r2; r++)
	{
		for(c = c1; c <= c2; c++)
		{
			if(min > m[r][c])
			{
				min = m[r][c];
			}
		}
	}
	
	printf("%d\n", min);
	
}