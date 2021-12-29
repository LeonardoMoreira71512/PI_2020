//problema3P7.c

#include <stdio.h>
#include <math.h>
#include <assert.h>

int ints_get(int *a)//serve para declarar os arrays
{
    int result = 0;
    int x;
    while (scanf("%d", &x) != EOF)
        {
        	a[result++] = x;
        }
    return result;
}

int ints_max(int *a, int n)//funcao maxima
{
    int result = a[0];
    for (int i = 1; i < n; i++) 
    {
        if (result < a[i])
            result = a[i];
    }
    return result;
}

int ints_min(int *a, int n)//vai ver os valores que comecam no indice 0
{
    int result = a[0];
    for (int i = 0; i < n; i++)
    {
        if (result > a[i])
        result = a[i];
    }
    return result;
}

int ints_all_equal(int *a, int n)//ira ver se serao todas as iguais
{
    if (n==0)
    {
        return 1;
    }else
    {
        if (ints_max(a, n)==ints_min(a, n))//condicao para determinar se os arrays forem iguais ele retorna 1, se nao, devolve 0
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

void unit_test(void)//para testar os valores da funcao
{
	int a[] = {-2, -1, 0, 1, 2, 3, 4};
	assert (ints_all_equal (a,-5) == 1);
	assert (ints_all_equal (a, 4) == 0);
	assert (ints_all_equal (a, 1) == 1);
	assert (ints_all_equal (a, 7) == 0);
}

void test_ints_all_equal(void)
{
    int a[1000];
    int n = ints_get(a);
    printf("%d\n", ints_all_equal(a,n));
}

int main (void) 
{
    unit_test();
    test_ints_all_equal();
    return 0;
}