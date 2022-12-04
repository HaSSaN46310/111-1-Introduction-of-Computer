#include <stdio.h>

int main()
{
	int n, x, mpos = 0;
	
	scanf("%d", &n);
	
	while(n > 0)
	{
		n--;
		
		scanf("%d", &x);
		
		if(x > 0 && x > mpos)
		{
			mpos = x;
		}
		printf("%d\n", mpos);
	}
	
	return 0;
}