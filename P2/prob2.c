// Soma dos n primeiros múltiplos de r 

#include <stdio.h>

int sum_positive_integers(int n)
{
  return n == 0 ? 0: sum_positive_integers(n-1) + n;
}

int sum_multiples(int r, int n)
{
  return n < 1 ? 0: (sum_positive_integers(n-1)) * r; 
}

void test_sum_multiples(void)
{   
	int n;
	int r;
    while(scanf("%d%d", &r, &n) != EOF)
    {
	  int z = sum_multiples(r,n);
      printf("%d\n", z);
      test_sum_multiples();
    }
}

int main(void)
{
	test_sum_multiples();
    return 0;
}
