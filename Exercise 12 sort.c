#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_LEN 16
#define N_REC   100

typedef struct
{
	char name[NAME_LEN];
	int age;
} Record;

int rec_cmp(const void *a, const void *b)
{
	Record *ra = (Record *)a, *rb = (Record *)b;
	int sc;
	
	sc = strcmp(ra ->name, rb ->name);
	return sc? sc: rb->age - ra->age;
}

int main()
{
	int i, n_rec, age;
	Record rec[N_REC];
	char namebuf[80];
	
	for(n_rec = 0; scanf("%79s %d", namebuf, &age) == 2; n_rec++)
	{
		strncpy(rec[n_rec].name, namebuf, NAME_LEN-1);
		rec[n_rec].name[NAME_LEN-1] = 0;
		rec[n_rec].age = age;
	}
	
	qsort(rec, n_rec, sizeof(Record), rec_cmp);
	for(i = 0; i < n_rec; i++)
	{
		printf("%-*s:%5d\n", NAME_LEN-1, rec[i].name, rec[i].age);
	}
}