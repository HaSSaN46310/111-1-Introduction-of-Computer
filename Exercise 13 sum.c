#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	int i, n, x, sum;
  	FILE *inf;

  	if(argc != 2) 
	{
	fprintf(stderr, "Usage: %s infile\n", argv[0]);
    exit(1);
  	}
  	
	if((inf = fopen(argv[1], "r")) == NULL) 
	{
    fprintf(stderr, "failed to open %s\n", argv[1]);
    exit(1);
  	}

  	while(fscanf(inf, "%d", &n) == 1) 
	{
    
	for(sum=0, i=0; i<n; i++) 
	{
      fscanf(inf, "%d", &x);
      sum += x;
    }
    
	printf("%d\n", sum);
  	}
  
  fclose(inf);
}
