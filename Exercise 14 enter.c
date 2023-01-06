#include <stdio.h>
#include <stdlib.h>

#define DATAFILE "DATA"

int main()
{
	int n;
	FILE *fout;
	
	if((fout = fopen(DATAFILE, "wb")) == NULL)
	{
		exit(1);
	}
	
	while(scanf("%d", &n) == 1)
	{
		fwrite(&n, sizeof(int), 1, fout);
	}
	
	fclose(fout);
}
