#include <stdio.h> 
#include <assert.h>
#include "our_ints.h"
#include "our_doubles.h"//nao encontro o ficheiro

//Problema C
//A ideia do problema e com a funcao de loule e faro receber o valor da precipitaçao em cada
//uma das cidades, cada valor sera do tipo double e tera uma casa decimal.
//Depois crio um outro array que calculara o valor da precipitacao de loule e de faro, tendo assim,
//a precipitacao total das duas cidades.
//Para saber a precipitacao diaria maxima, terei que encontrar o maximo do array de cada cidade
//Para saber o numero de dias em que choveu vou buscar todos os valores exceto zero, ou seja,
//a ideia talvez seja contar todos os valores de cada array que sao diferentes de 0.0.
//Talvez com count while pondo a condicao de a[result++] >= 0.0  Ver licao 14 pag 13
//Para saber o maior numero de dias de chuva seguidos, tenho que saber quantos dias com chuva
//houve e qual o comprimento da mais comprida Ver licao 14 pag 22

double doubles_count_total(const double *b, int x)
{
	double result = 0;
	int i = 0;
	while(i < x)
	{
		result+= b[i];
		i++;
	}
	return result;
}

double count_max(const double *b, int x)
{
	assert(x >= 0);
	double result = b[0];
	for(int i = 0; i < x; i++)
	{
		if (result < b[i])
			result = b[i];
	}
		return result;
}

int doubles_count_rain(const double *b, int x)
{
	int result = 0;
	int i = 0;
	while (i < x)
	{
		if(b[i] > 0)
		{
			result++;
			i++;
		}
		else
		{
			i++;
		}
	}
	return result;
}

int ints_count_while_positive(const double *a, int n)
{
	int result = 0;
	while ((result < n) && (a[result] > 0))
	{
		result++;
	}
	return result;
}

int ints_count_while_0(const double *a, int n)
{
	int result = 0;
	while ((result < n) && (a[result] == 0))
	{
		result++;
	}
	return result;
}

int ints_count_rainrow(const double *a, int n, double *b)
{
	int result = 0;
	int i = 0;
	while (i < n)
	{
		int z = ints_count_while_positive(a + i, n - i);
		int y = ints_count_while_0(a + i, n - i);
		if (z > 0)
		{
			b[result++] = z;
			i += z;
		}
		else if(y > 0)
		{
			i+= y;
		}
	}
	return result;
}

double array_pares(const double *a, int n, double *b)
{
	int result = 0;
	int i = 0;
	while (i<n)
	{
		b[result++] = a[i];
		i+= 2;
	}
	return result;
}

double array_impares(const double *a, int n, double*c)
{
	int result = 0;
	int i = 1;
	while(i < n)
	{
		c[result++] = a[i];
		i+= 2;
	}
	return result;
}

void test_penico(void)
{
	double a[1000];
	int n = doubles_get(a);
	double b[1000];
	int x = array_pares(a, n, b);
	double c[1000];
	int y = array_impares(a, n, c);
	double d[1000];
	double e[1000];
	double p = doubles_count_total(b, x);
	double q = doubles_count_total(c, y);
	double r = count_max(b, x);
	double s = count_max(c, y);
	int t = doubles_count_rain(b, x);
	int u = doubles_count_rain(c, y);
	int v = ints_count_rainrow(b, x, d);
	int w = ints_count_rainrow(c, y, e);
	int vfinal = count_max(d, v);
	int wfinal = count_max(e, w);
	printf("%.1f %.1f\n", p, q);
	printf("%.1f %.1f\n", r, s);
	printf("%d %d\n", t, u);
	printf("%d %d\n", vfinal, wfinal);
}

int main (void)
{
	test_penico();
	return 0;
}