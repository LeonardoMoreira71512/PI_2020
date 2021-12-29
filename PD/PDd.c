//Problema D

#include <stdio.h> 
#include <assert.h>
#include "our_ints.h"
#include "our_doubles.h"

int rampa(const int *a, int n, int x)//calcular o numero de rampas que existem
{
	int result = 0;
	int i = 0;
	int p = 1;
	int z = 0;
	while(i<n)
	{
		if(a[i]<a[i+1])//trocar sinais
		{
			z++;
			if(p!= 0 && z>= x)
			{
				result++;
				p = 0;
			}
		}
		else if(a[i] >= a[i+1])
		{
			p = 1;
			z = 0;
		}
		i++;
	}
	return result;
}

int comprimento(const int *a, int n, int x)//calcular o comprimento total das rampas
{
	int result = 0;
	int i = 1;
	int z = 0;
	while (i<n)
	{
		if(a[i-1] < a[i])
		{
		  z++;
		  if((z>=x) && (i+1 == n))
			result += z;
	    }
	 else if(a[i-1] >= a[i])
	 { 
		if (z>=x)
		{
			result += z;
		}
		z = 0;
	  }
	  i++;
    }
return result;
}

void test_rampa(void)
{
	int d;
	scanf("%d", &d);
	int a[1000];
	int n = ints_get(a);
	int novon = rampa(a,n,d);
	int f = comprimento(a,n,d);
	printf("%d %d\n", novon, f);
}

int main(void)
{
	test_rampa();
	return 0;
}

