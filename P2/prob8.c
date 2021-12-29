// Soma dos quadrados dos números inversos

#include<stdio.h>
#include<math.h>


double sum_powers_from(double x, double y, int n)
{
   return (n-1) == 0 ? pow(x,y): pow(x,y) + sum_powers_from(x + 1, y, n - 1);
}


double sum_inverse_squares(int n)
{
	return sum_powers_from(1, -2, n);
}

void test_sum_inverse_squares(void)
{
	int n;
	while(scanf("%d", &n) != EOF)
      {
      	double z = sum_inverse_squares(n);
      	printf("%f\n", z);

      }
}

int main(void)
{
	test_sum_inverse_squares();
	return 0;
}