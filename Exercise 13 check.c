#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	int  m, base;
  	char *s, *end;

  	if(argc != 3) 
  	{
    	fprintf(stderr, "%s msg base\n", argv[0]);
    	exit(1);
  	}
  
  	base = strtol(argv[2], &end, 10);
  
  	if(base <=0 || *end != 0) 
  	{
    	fprintf(stderr, "Bad base: %s\n", argv[2]);
    	exit(1);
  	}

  	for(m=0, s=argv[1]; *s; s++)
  	{
		m = (m*256 + (*s)) % base;
  	}	
  	printf("%d\n", m);
}
