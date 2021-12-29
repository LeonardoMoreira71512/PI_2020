// NBA

#include <stdio.h>
#include <math.h>

double nba (int p, int f, int a)
{
 return p * 30.48 + f * 2.54 + a * 0.15875;
}

double rounds(double z)
{
	return round(z * 2) / 200;
}

void test_nba(void)
{
	int p;
	int f;
	int a;
	while(scanf("%d%d%d", &p, &f, &a) != EOF)
	{
     double z = nba(p,f,a);
     z = rounds(z);
     printf("%f\n", z);
	}
}

int main (void)
{
	test_nba();
	return 0;
}