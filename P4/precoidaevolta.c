// Preço ida e volta dos comboios CP

#include<stdio.h>
#include<math.h>

double const preco_por_km = 0.087;

double price_ida(int k)
{
 return ceil(k * preco_por_km * 2) / 2; //funcao para saber o preço de ida
}                                       //uso a funcao ceil para arredondar às decimais

double price_ida_e_volta(int k)
{
 return ceil(price_ida(k) * 2 * 0.85 * 2) / 2; //funcao para saber o preco de ida e volta
}

void test_total()
{
  int k;
  while(scanf("%d", &k) != EOF)
  {
    double i = price_ida(k); //vou chamar a funcao de ida
    double v = price_ida_e_volta(k); //chamo tambem a funcao de ida e volta
    printf("%.2f %.2f\n", i, v); //%.2f para mostrar 2 casas decimais e \n para mudar de linha
  }
}

int main (void)
{
	test_total();
	return 0;
}