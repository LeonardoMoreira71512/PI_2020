// Preço ida e volta dos comboios CP

#include<stdio.h>
#include<math.h>

double const preco_por_km = 0.087;

double price(int k, int v)
{
	int result;
	if (v == 1)
	{
      result = k * preco_por_km;
	}
	else if (v > 1)
	{
		result = 2 * k * preco_por_km * 0.85;
	}
	return result;
}

void test_price()
{
  int k;
  int v;
  while(scanf("%d%d", &k, &v) != EOF)
  {
    int z = round(price(k, v) * 100) / 100;
    printf("%d\n", z);
  }
}

int main (void)
{
	test_price();
	return 0;
}