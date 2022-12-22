#include <stdio.h>
#include <stdlib.h>

#define N_POINT 1024

typedef struct 
{
  	int x,y;
} Point;

Point p [N_POINT ];

int angle_cmp(const void *a, const void *b)
{ 
	Point *p, *q;
	int x0,x1, y0, y1, diff;
  
  	p = (Point *)a;  q = (Point *)b;
  	x0 = p->x,  y0 = p->y;
  	x1 = q->x,  y1 = q->y;

  	diff = y0*x1 - y1*x0;
  	return diff==0? x0-x1: diff;
}

int main()
{ 
	int i, np;
  
    while(scanf("%d", &np) == 1) 
	{
    
	if(np == 0) 
	{
	break;
	}
    
	for(i=0; i<np; i++) 
	{
	scanf("%d %d", &p[i].x, &p[i].y);
	}
    
	qsort(p, np, sizeof(p[0]), angle_cmp);
    
	for(i=0; i<np; i++)
    {
		printf("%d %d\n", p[i].x, p[i].y);
	}
  	}
  return 0;
}
