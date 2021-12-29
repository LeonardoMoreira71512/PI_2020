//Problema A Festa

#include <stdio.h> 
#include <assert.h>


int stop_operation (int a, int x)
{
    while (a > 0)
    {
        if (a % 10 == x)
        {
            return 1;
        }
        a = a / 10;
    }
    return 0;
}

int stop_operation_final (int *a, int n, int x, int *b)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (stop_operation (a[i], x) == 1)
            b[result++] = a[i];
    }
    return result;
}

int ints_get_matricula (int *a)
{
    int result = 0;
    int x;
    while (scanf("%d", &x) !=EOF)
    {
        a[result++] = x;
    }
    return result;
}

void ints_println_matricula (int *b, int n)
{
  if (n > 0)
  {
    printf("%d\n", b[0]);
    for (int i = 1; i < n; i++)
      printf("%d\n", b[i]);
  }
}

void test_stop_operation (void)
{
    int a[1000];
    int x;
    scanf("%d", &x);
    int n = ints_get_matricula(a);
    int b[1000];
    printf("%d\n", stop_operation_final (a, n, x, b));
    ints_println_matricula (b, stop_operation_final (a, n, x, b));
}

int main (void)
{
    test_stop_operation();
    return 0;
}

