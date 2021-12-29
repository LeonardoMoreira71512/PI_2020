//Problema B da festa

#include <stdio.h> 
#include <assert.h>

int doubles_get(double *a)
{
  int result = 0;
  double x;
  while (scanf("%lf", &x) != EOF)
    a[result++] = x;
  return result;
}

void doubles_println_basic(const double *a, int n)//escreve os elementos separados por um espaço
{
  if (n > 0)
  {
    printf("%g", a[0]);
    for (int i = 1; i < n; i++)  // i = 1
      printf(" %g", a[i]);
  }
  printf("\n");
}

int doubles_get_two(double *a, double *b)
{
  int result = 0;
  double x, y;
  while (scanf("%lf%lf", &x, &y) != EOF)
  {
    a[result] = x;
    b[result] = y;
    result++;
  }
  return result;
}

double albufeira (int x, int *a, int n, int *b)
{
  double result = 0;
    double x;
    while (scanf("%d", &x) !=EOF)
    {
        a[result++] = x;
    }
    return result;

}

int main(void)
{
    test_albufeira();
    return 0;
}


