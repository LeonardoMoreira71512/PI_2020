/*Eu, Leonardo Moreira, declaro por minha honra que este programa foi escrito por mim, durante o
exame de 5 fevereiro de  2021, e que nao recebi ajuda de ninguem, a nao ser, eventualmente, da professora Graça, do professor Amine
e do professor Pedro
*/

#include<stdio.h>
#include<assert.h>
#include"our_ints.h"
#include"our_doubles.h"

int pos(const char*a, int *h)//vai me dar a posicao do penultimo underscore para ter a segunda letra
{
	int result = 0;
	int i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == 95)
			{
                   h[result++] = i;
			}
			i++;
}
return h[result - 2];//para ter a posicao do elemento que quero, -2 por causa do underscore
}

int find_pos_underscore(const char *a, int *x)//funcao para encontrar a posicao do underscore
{
	int result = 0;
	//int i = 0;
	//while (a[i] != '\0')
	for(int i = 0; i < a[i]; i++)
	{
		if (a[i] == 95)
		{
			x[result++] = i;
		}
		i++;
		}
		return result;
}

int numeroletras(const char *a)//vai me dar o tamanho do array inicial
{
	int i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return i -1;//subtraiu 1 pq tenho o underscore em ultimo e eu quero o ultimo numero
}


char *input(char *a, char *x)
{
	int h[100];
	x[0] = a[0];//o array a vai ser o array de caracteres inicial
	x[1] = a[pos(a,h) + 1];//somar 1 pq quero a segunda letra
	x[2] = a[numeroletras(a) - 1];//vai me dar o primeiro numero
	x[3] = a[numeroletras(a)];//vai dar o ultimo numero, ou seja, o tamanho do array inicial
	x[4] = '\0';
	return x;
}

void test_final(void)
{
	char n1[80];//so pode ter no maximo 80 caracteres
	char n2[80];
	
	while(scanf("%s", n1) != EOF)
	{
		printf("%s\n", input(n1, n2));
	}
	
}

int main(void)
{
	test_final();
	return 0;
}

