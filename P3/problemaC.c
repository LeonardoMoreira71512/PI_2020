#include <stdio.h>

//x e y em dm

int blue(int x, int z)
{
 int l = (z + 1)/2;//n º linhas azuis
 int lf = 1 + (l-1)*4;//nº azuleijos azuis na linha e coluna
 int sum = ((1+lf)/2)*l;// somatório azuleijos azuis
 return z%2 == 0 ? (((x-z+1)/2)*z) + sum : (((x-z)/2)*z) + sum;
}

int yellow(int x, int z, int b)
{
 return (x*z) - b; //azulejos totais - azuleijos azuis
}

void test_operation_int(void)
{
   int x;
   int z;
    while (scanf("%d%d", &x, &z) != EOF)
    {
   	int b = blue(x, z);
   	int y = yellow(x, z, b);
   	printf("%d %d\n", b, y);
   }
}

int main(void)
{
	test_operation_int();
	return 0;
}