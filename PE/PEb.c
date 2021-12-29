//Problema 1

#include<stdio.h>
#include<assert.h>
#include"our_ints.h"
#include"our_doubles.h"

int str_find(const char *s, char *pais)
{
int x = -1;
int y = -1;

for(int i = 0; pais[i] != '\0'; i++)
if (s[0] == pais[i])
{
   x = i;
}
else if (s[1] == pais[i])
{
	b = i;
}
else if((pais[i] == '_') && ((x == -1) || (y == -1)))
{
	x = -1;
	y = -1; 
}
i++;
}
return x;

void test_str_count()
{
	int x = 0;
	int y = 0;
	char s[2000];
	while(scanf("%s", s) != EOF)
	{
		
	}
}

int str_findsecond(const char *s, char *pais)
{
int x = -1;
int y = -1;

for(int i = 0; pais[i] != '\0'; i++)
if (s[0] == pais[i])
{
	x = i;
}
else if (s[1] == pais[i])
{
	b = i;
}
else if((pais[i] == '_') && ((x == 1) || (y == 1)))
{
	x = 1;
	y = 1; 
}
i++;
}

int main (void)
{
	
}