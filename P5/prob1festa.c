//Problema 1 da Festa

#include <stdio.h>
#include <math.h>

double embalagens_de_oferta(int u, double p)
{
 return (u - (u/3)) * p * 0.8; // para saber o preco das embalagens com o desconto dos 20
}

double preco_por_litro(double p, double q)
{
	return p / q; //para saber o preço por litro
}

double total(double p, double q, int u) //preco por litro já com as embalagens que foram de oferta
{
	double x = (embalagens_de_oferta(u,p) / (q * u));
	return x;
}

double arredondamento(double z) //para arredondar aos centimos
{
 return round((z * 100)) / 100;
}

void test_total()
{
	double p;
	double q;
	int u;
	while (scanf("%lf%lf%d",&p, &q, &u) != EOF) //se for double utilizar lf
	 {
     double z = total(p,q,u);
     printf("%f\n",arredondamento(z));
	 }
}
int main(void)
{
	test_total();
	return 0;
}