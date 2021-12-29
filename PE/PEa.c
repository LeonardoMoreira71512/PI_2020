//Problema 1

#include<stdio.h>
#include<assert.h>
#include"our_ints.h"
#include"our_doubles.h"

int str_find(const char s, char *pais)
{
	int i = 0;
	while(pais[i] != '\0')
	{
		if(s == pais[i])
		{
			return i;//da a posicao do i
		}
		i++;
	}
	return -1;
}
void test_pais(void)
{
	char s[2000];
	scanf("%s", s);
	char p = s[0];
	char t = s[1];
	int posicao= 0;
	int b[1000];
	int i = 0;
	char pais[1000];
	while(scanf("%s", pais) != EOF)
	{
		int x = str_find(p, pais);
		int y = str_find(t, pais);
		b[posicao++] = x;//posicoes onde encontro as letras
		b[posicao++] = y;
	}
	while(i<posicao-1)
	{
		if((b[i] > -1 && b[i+1] > -1) && b[i] < b[i+1])//se encontro as duas letras ou seja sao maiores que um da yes
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		i+= 2;
	}
}

int main (void)
{
 test_pais();
 return 0;
}