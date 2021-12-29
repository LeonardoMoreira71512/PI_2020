#include <stdio.h>
#include <math.h>

int ints_get(int *a)
{
    int result = 0;
    int x;
    while (scanf("%d", &x) != EOF)
        a[result++] = x;
    return result;
}

int even_positions_minus_odd_positions(const int *a, int n)
{
    int pares=0;
    int impares=0;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            pares=pares+a[i];
        }else
        {
            impares=impares+a[i];
        }
    }
    return pares-impares;
}

void test()
{
    int a[1000];
    int n = ints_get(a);
    printf("%d\n", even_positions_minus_odd_positions(a, n));
}


int main (void) 
{
    test();
    return 0;
}