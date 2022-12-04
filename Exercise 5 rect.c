#include <stdio.h>

int main()
{
	int n_row, n_col, n, r, c, count;
	char show;
	
	scanf("%d %d %d", &n_row, &n_col, &n);
	
	count = 0;
	show = '*';
	
	for(r = 0; r < n_row; r++)
	{
		for(c = 0; c < n_col; c++)
		{
			putchar(show);
			count = (count + 1) % n;
			
			if(count == 0)
			{
				if(show == '*')
				{
					show = '-';
				}
				else
				{
					show = '*';
				}
			}
		}
		putchar('\n');
	}
}