#include <stdio.h>

void nchars(int n, char ch)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		putchar(ch);
	}
}

int main()
{
	int r, s, w;
	char ch;
	
	scanf("%d %c", &w, &ch);
	
	for(r = 0; r < w; r++)
	{
		nchars(w - r - 1, ' ');
		nchars(2 * r + 1, ch);
		putchar('\n');
	}
	
	return 0;
	
}