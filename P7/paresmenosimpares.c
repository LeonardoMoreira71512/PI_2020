//Pares menos ímpares

#include <stdio.h>
#include <math.h>


int ints_get(int *a)//serve para declarar o array
{
    int result = 0;
    int x;
    while (scanf("%d", &x) != EOF)
        a[result++] = x;
    return result;
}

int even_values_minus_odd_values(const int *a, int n)//calcula a diferenca dos numeros pares com os numeros impares
{
	int pares = 0;
    int impares = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)//vamos ver se o numero a que corresponde o indice tera resto da divisao por 2 igual 0. Se nao, sabemos que e impar e vamos adicionando os numeros
        {
            pares=pares+a[i];
        }
        else
        {
            impares=impares+a[i];
        }
    }
    return pares-impares;
}

void test()
{
	int a[1000];
	int n = ints_get(a);
	printf("%d\n", even_values_minus_odd_values(a, n));
}

int main (void)
{
	test();
	return 0;
}
