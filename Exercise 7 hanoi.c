#include <stdio.h>

void hanoi(int n, char from, char by, char to) 
{
    if(n == 1) 
	{
        printf("from %c to %c\n", from, to);
        
    }
    else 
	{
	    hanoi(n - 1, from, to, by);
        hanoi(1, from, by, to);
        hanoi(n - 1, by, from, to);
    }
}

int main() {
    int n;
	char from, by, to;
	
    scanf("%d %c %c %c", &n, &from, &by, &to);
    hanoi(n, from, by, to);
    
}