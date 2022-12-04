#include <stdio.h>

#define BASE 109

int main()
{
	char ch;
	int v;
	
	for(v = 0; ; )
	{
		ch = getchar();
		
		if(ch == '\n')
		{
			break;
		}
		
		v = (10 * v + ch - '0') % BASE;
	}
	printf("%d\n", v);
	
}