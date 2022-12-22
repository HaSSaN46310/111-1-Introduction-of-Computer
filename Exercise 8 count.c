#include <stdio.h>
#include <string.h>

int main()
{
	int ch;
	int count[256];
	
	memset(count, 0, sizeof(count));
	
	while((ch = getchar()) != EOF)
	{
		count[ch]++;
		
		for(ch = 'a'; ch < 'z'; ch++)
	    {
		    printf("%d ", count[ch]);
	    }   
	    
    }
	
	printf("%d\n", count['z']);
}