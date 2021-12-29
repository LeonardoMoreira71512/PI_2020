//Problema dos penaltis

#include <stdio.h> 
#include <assert.h>
#include "our_ints.h"

//Com o problema A vou tentar usar 2 funcoes para ver quando e que o sinal se altera ou se
//mantem. Para isso vou usar uma funcao que conte todos os elementos maiores ou iguais a 0 e uma que
//conte todos os numeros menores ou iguais ou a 0. na principal, atribuo uma variavel(z e y) as duas funcoes
//e com uma condicao if else saberei quando devo contar os numeros negativos e os positivos. ou seja se z for maior que 0
//entao 

int ints_count_while_positive(const int *a, int n)//n sera o tamanho do array e x sera os valores individuais; vai contar os numeros positivos
{
int result = 0;
while((result < n && a[result] >= 0))	
 {
	result++;
 }
 return result;
}

int ints_count_while_negative(const int* a, int n)//vai contar os numeros negativos
{
 int result = 0;
 while((result < n && a[result] <= 0))
 {
	result++;
 }
 return result;
 }

	int angulo_remate(const int *a, int n, int *b)
{
	int result = 0;
	int i = 0;
	while (i < n)
	{
		int z = ints_count_while_positive(a + i, n - i);
		int y = ints_count_while_negative(a + i, n - i);
		if (z > 0)
		{
			b[result++] = z;
			i += z;//uso esta condicao pq dps parto da posicao a partir da qual somei o z com a posicao do numero que estava a ver se era negativo ou positivo
		}
		else if (y > 0)
		{
			b[result++] = y;
			i += y;
		}
	}
	return result;
}

void test_angulo_remate(void)
{
	int a[1000];
	int n = ints_get(a);
	int b[1000];
	int m = angulo_remate(a, n, b);
    ints_println_special(b, m);
}

int main(void)//para compilar dar o nome do ficheiro mais o our ints ponto c
{
	test_angulo_remate();
	return 0;
}
