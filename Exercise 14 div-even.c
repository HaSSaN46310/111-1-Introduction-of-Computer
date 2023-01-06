#include <stdio.h>
#include <stdlib.h>

#define DATAFILE "DATA"

int main()
{
	int n;
	FILE *dataf;
	
	if((dataf = fopen(DATAFILE, "rb+")) == NULL)
	{
		exit(1);
	}
	
	while(fread(&n, sizeof(int), 1, dataf))
	{
		if(feof(dataf))
		{
			break;
		}
		
		if(n % 2 == 0)
		{
			n /= 2;
			fseek(dataf, -sizeof(int), SEEK_CUR);
			fwrite(&n, sizeof(int), 1, dataf);
		}
	}
	fclose(dataf);
}
