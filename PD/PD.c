//PD

#include <stdio.h> 
#include <assert.h>
#include "our_ints.h"
#include "our_ints.c"

//Problema A

int angulo_remate(int *a, int n, int x, int *b)
{
  assert(-90 <= a[i] <= 90);
  int result = 0;
  for(int i = 0; i < n; i++)
  {
   if(a[i] > 0 && a[i + 1] > 0) || (a[i] < 0 && a[i +1] < 0)//para ver se o sinal se manteve igual
   {
   	b[result++] = i++
   }
   if(a[i] < 0 && a[i + 1] > 0) || (a[i] > 0 && a[i + 1] < 0)//para ver se o sinal se alterou
   {
    b[result++] = i++
   }
  }
  return result;
}

void test_int_angulo_remate(void)
{
	int a[1000];
	int n = ints_get_until(-1, a)
	int x;
 while(scanf("%d", &x) != EOF)
	{
	int b[1000];
	int m = angulo_remate(a, n, x, b)
    ints_println_special(b, m)
    }
}

//Problema B
//A ideia do problema e com a funcao de loule e faro receber o valor da precipitaçao em cada
//uma das cidades, cada valor sera do tipo double e tera uma casa decimal.
//Depois crio um outro array que calculara o valor da precipitacao de loule e de faro, tendo assim,
//a precipitacao total das duas cidades.
//Para saber a precipitacao diaria maxima, terei que encontrar o maximo do array de cada cidade
//Para saber o numero de dias em que choveu vou buscar todos os valores exceto zero, ou seja,
//a ideia talvez seja contar todos os valores de cada array que sao diferentes de 0.0.
//Talvez com count while pondo a condicao de a[result++] >= 0.0  Ver licao 14 pag 13
//Para saber o maior numero de dias de chuva seguidos, tenho que saber quantos dias com chuva
//houve e qual o comprimento da mais comprida Ver licao 14 pag 22

double loule(double *a, double n)
{
 int precipitacao = 0;
  for(int i = 0; i < n; i++)
}

double faro(double *b, double x)
{
 int precipitacao = 0;
  for(int i = 0; i < n; i++)
}

double precipitacao(int *c, int u)
{
	return loule + faro
}
void test_double_precipitacao(void)
{
	int a[1000];
	int n = double_get_two(a, b)
	int x;
 while(scanf("%d", &x) != EOF)
	{
	int b[1000];
	int m = (a, n, x, b)
    doubles_println_special()
    }
}

void unit_test_angulo_remate(void)
{
int a[10] = {2 -1 4 5 -2 -4 -3 0 2 1};
int b[1000];
asssert(angulo_remate(a1, 5, 5, b1) == 4 && b1[0] == 1 && b1[1] == 1 && b2[2] = 2 && b[3] = 1);
asssert(angulo_remate(a1, 3, 3, b1) == 3 && b1[0] == 1 && b1[1] == 1 && b1[2] == 1);
asssert(angulo_remate(a1, 7, 7, b1) == 4  && b1[0] == 1 && b1[1] == 1 && b1[2] == 2 && b1[3] == 3); 
asssert(angulo_remate(a1, 10, 10, b1) == 5 && b1[0] == 1 && b1[1] == 1 && b1[2] == 2 && b1[3] == 4 && b1[4] == 2);
}

void unit_test_dezembro(void)
{

}

void unit_test_precipitacao(void)
{

}

void unit_test_rampa(void)
{

}

void unit_test_recessao(void)
{

}

void unit_test_bigbang(void)
{

}

void unit_tests()
{
	test_angulo_Remate();
	test_dezembro();
	test_precipitacao();
	test_rampa();
	test_recessao();
	test_bigbang();
}

int main(int argc, char **argv) 
{
unit_tests();
 int x = 'A';
 if (argc > 1)
 x = *argv[1];
 if (x == 'A')
 test_int_angulo_remate();
 else if (x == 'B')
 test_int_dezembro();
 else if (x == 'C')
 test_int_precipitacao();
 else if (x == 'D')
 test_int_rampa();
 else if (x == 'E')
 test_int_recessao();
 else if (x == 'F')
 test_int_bigbang();
else if (x == 'G')
 printf("All unit tests PASSED.\n"); 
 else 
 printf("%s: Invalid option.\n", argv[1]);
 return 0;