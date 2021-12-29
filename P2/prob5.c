// Soma dos quadrados

#include<stdio.h>

double sum_squares_from (double x, double n)
{
  return n == 0 ? 0: x*x + sum_squares_from(x + 1, n - 1);
}

void test_sum_squares_from(void)
{
	double x;
	double n;
	while(scanf("%lf%lf", &x, &n) != EOF)
	{
		double z = sum_squares_from(x, n);
		printf("%lf\n", z);
	}
}

int main(void)
{
	test_sum_squares_from();
	return 0;
}