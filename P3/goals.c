// saltos dados/golo

#include <math.h>
#include <stdio.h>

int somersaults(int g)
{
  int result;
	if (g%4 == 1) 
	{
		result = (g/4)*8+1;
	}
	else if (g%4 == 2) 
	{
  		result = (g/4)*8 + 3;
	}
  	else if (g%4 == 3) 
  	{
  		result = (g/4)*8 + 6;
  	}
  	else 
  	{
  		result = (g/4)*8;
  	}
  return result;
}

void test_somersaults()
{
	int g;
	while(scanf("%d", &g) != EOF)
    {
      int z = somersaults(g);
      printf("%d\n", z);
    }
}

int main(void)
{
	test_somersaults();
	return 0;                           
}