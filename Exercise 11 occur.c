#include <stdio.h>
#include <string.h>

#define N_STR_LEN    32
#define N_LINE_LEN 1024

int main()
{
	int line_len, pat_len, cnt;
	char buf[N_LINE_LEN];
	char pat[N_STR_LEN];
	char *end, *s;
	
	while(fgets(buf, N_LINE_LEN, stdin) != NULL)
	{
		sscanf(buf, " %s", pat);
		fgets(buf, N_LINE_LEN, stdin);
		line_len = strlen(buf);
		pat_len = strlen(pat);
		
		if(pat_len == 0)
		{
			goto done;
		}
		
		end = buf + line_len;
		for(cnt = 0, s = buf; s < end; )
		{
			if(s = strstr(s, pat))
			{
				cnt++;
				s += pat_len;
			}
			else
			{
				break;
			}
		}
	}
	
	done:
		printf("%d\n", cnt);
}
