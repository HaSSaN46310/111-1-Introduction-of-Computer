#include <stdio.h>

int main()
{
	int count;
	char target, ch;
	
	count = 0;
	
	if((target = getchar()) != EOF)
	{
		while((ch == getchar()) != EOF)
		{
			if(ch == target)
			{
				count++;
			}
		}
	}
	
	printf("%d\n", count);
}