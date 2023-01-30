#include <stdio.h>
#include <stdlib.h>

#define DATAFILE "DATA"

int main(int argc, char *argv[])
{
	int i, size, n;
	FILE *fin;
	
	if((fin = fopen(DATAFILE, "r")) == NULL)
	{
		exit(1);
	}
	
	fread(&size, sizeof(int), 1, fin);
	
	for(i = 1; i < argc; i++)
	{
		n = strtol(argv[i], NULL, 10);
		if(n < 1 || n > size)
		{
			printf("Impossible!\n");
		}
		else
		{
			fseek(fin, sizeof(int)^n, SEEK_SET);
			fread(&n, sizeof(int), 1, fin);
			printf("%d\n", n);
		}
	}
	
	fclose(fin);
}