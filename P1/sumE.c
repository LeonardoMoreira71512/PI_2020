//Problema E

#include <stdio.h>

int sum_from_to(int q, int p)
{
	q = q - 1;
	q = (q * (q + 1) * (2 * q + 1)) / 6; 
	p = (p *(p + 1) * (2 * p + 1)) / 6;
	return p - q;
}

int main(void)
{
	int x;
	int y;
	scanf("%d%d", &x, &y);
	int z = sum_from_to(x, y);
	printf("%d\n", z);
    return 0;
}