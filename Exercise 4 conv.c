#include <stdio.h>

int main()
{
	int ch;
	
	while((ch == getchar()) != EOF)
	{
		if(ch == '$')
		{
			putchar(ch);
		}
		
		if(ch >= '0' && ch <= '9')
		{
			ch = '$';
			putchar(ch);
		}
	}
}