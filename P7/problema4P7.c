//problema4P7

#include <stdio.h>
#include <math.h>
#include <assert.h>

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

int ints_remove(const int *a, int n, int y, int *b)//vai remover o valor maximo do array
{
	int result = 0;
	for (int i = 0; i < n; i++)
	   if (a[i] != y)
	       b[result++] = a[i];
	return result;
}

int ints_get (int *a)
{
	int result = 0;
	int n;
	while (scanf("%d", &n) != EOF)
	{
	 a[result++] = n;
	}
	return result;
}

void test_ints_max (void)
{
	int a[1000];
	int n = ints_get(a);
	int b[1000];
	int y = ints_max(a, n);
	int z = ints_remove(a, n, y, b);
	printf("%d\n", ints_max(b, z));
}

void unit_tests(void)//testes unitarios
{
	int a[5] = {6, 7, 1, 8, 7};
	int b1[5];
	ints_remove(a, 5, 7, b1);
	int y1[3] = {6, 1, 8};
	assert(ints_max(y1, 3) == 8);
	int b2[5];
	ints_remove(a, 5, 6, b2);
	int y2[4] = {7, 1, 8, 7};
	assert(ints_max(y2, 4) == 8);
	int b3[5];
	ints_remove(a, 5, 3, b3);
	assert(ints_max(a, 5) == 8);
	int b4[5];
	int z4 = ints_remove(a, 0, 7, b4);
	assert(z4 == 0);
}

int main (void)
{
	unit_tests();
	test_ints_max();
	return 0;
}