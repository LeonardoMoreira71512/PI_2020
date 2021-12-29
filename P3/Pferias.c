//Um Programa por dia
#include<stdio.h>
#include<assert.h>
#include"our_ints.h"
#include"our_doubles.h"

int prefix( const char *f, const char *s)
{
int i = 0;
	while( f[i] != '\0')
	{
		if(f[i] == s[i])
			i++;
		else
		{
			return 0;
		}
	}
	return 1;
}
void test_prefix(void)
{
	char *word[2] = {"NO", "YES"};
	char f[1000];
	char s[1000];
	while (scanf("%s", f) != EOF)
	{
		scanf("%s", s);
		int y = prefix(f, s);
		printf("%s\n", word[y]);
	}
		
}

int main (void)
{
	test_prefix();
	return 0;
}