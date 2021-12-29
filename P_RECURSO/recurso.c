/*Eu, Leonardo Moreira, declaro por minha honra que este programa foi escrito por mim, durante o
exame de 5 fevereiro de  2021, e que nao recebi ajuda de ninguem, a nao ser, eventualmente, da professora Graça, do professor Amine
e do professor Pedro
*/


// Problema A
#include<math.h>
#include<stdio.h>
#include<assert.h>
#include"our_ints.h"
#include"our_doubles.h"

int const cilindrada = 750;//indicar simplesmente as variaveis
int const cilindrada2 = 1250;
int const cilindrada3 = 500;
double const centimos = 0.90;
double const centimoos2 = 2.25;
int const emissao = 95;

double cilindradaa(int c, int e)
{
	int f = c - cilindrada;//c sera a diferenca entre um dos valores entre os 750 e os 1250 e o numero que quiser 
	int d = c - cilindrada2;//d sera um valor superior a 1250
	double j = cilindrada3 * centimos;//é a totalidade que se paga sem o custo adicional
	double result = 0;
	if (c > cilindrada && c < cilindrada2)
	{
		result = f*centimos;//para saber quanto pago caso o valor esteja entre os valores 750 e 1250
	}
	else if (c >= cilindrada2)
	{
		result = (d*centimoos2) + j;//sera o valor normal caso passe dos 1250 + o total a partir dos 750 ou seja 500 * 0,90
	}
	return result;
}

double emissaoo(int c, int e)//calcular o preço para a emissao de co2
{
	double result = 0;
	double h = pow(e - emissao, 2);//parte do numerador da formula
	double g = h/5;//vai dar o resultado final caso o valor seja maior que 95
	if (e > emissao)//se for maior que 95 entao uso a variavel g
	{
		result = g;
	}
	return result;
}

double isv(int c, int e)//ira calcular o total do isv mais a emissao do co2
{
	double result = 0;
	result = cilindradaa(c,e) + emissaoo(c, e);
	return result;
}
void unit_test(void)
{
 assert(isv(500, 0) == 0.0);
 assert(isv(760, 0) == 9.0);
 assert(isv(1350, 0) == 675.0);
 assert(isv(0, 0) == 0.0);
 assert(isv(500, 100) == 5.0);
 assert(isv(500, 195) == 2000.0);
 assert(isv(760, 195) == 2009.0);
 assert(isv(1350, 195) == 2675.0);
} 
void test_isv(void)
{
	int a,b;
	while (scanf("%d%d", &a, &b) != EOF)//o a e b representam a cilindrada e a emissao de co2
	{
		printf("%f\n", isv(a,b));//vamos dar print a funcao isv que vai calcular o preco total da cilindrada e da emissao juntos
	}
}

//PROBLEMA B

int ints_gett(int *a)//servira apenas para ler o array inicial
{
	int result = 0;
	int x;
	while (scanf("%d", &x) != EOF)
	{
		a[result] = x;
		result++;
	}
	return result;
}

int daily_weekly_average(int *a, int *b, int n)
{
	int average = 0;
	int i = 0;
	int result;
	while (i < n)
	{
		average = (a[i] + a[i+1] + a[i+2] + a[i+3] + a[i+4] + a[i+5] + a[i+6]) / 7;//fara a media semanal
		b[result] = average;//vou colocar num array o resultado da media semanal
		result++;
		i += 7;
	}
	return result;
}

void test_daily_weekly_average(void)
{
	int a[1000];
	int b[1000];
	int n = ints_gett(a);
	int e = daily_weekly_average(a, b, n);
	for( int i = 0; i < e; i++)
	{
		printf("%d ", b[i]);//vou dar print ao novo array com a media calculada
	}
}




//PROBLEMA D



void iso(const char* data1, char* data2)//usar simplesmente os caracteres das datas e troca los de lugar
{
	data2[0] = data1[6];
	data2[1] = data1[7];
	data2[2] = data1[8];
	data2[3] = data1[9];
	data2[4] = '-';
	data2[5] = data1[3];
	data2[6] = data1[4];
	data2[7] = '-';
	data2[8] = data1[0];
	data2[9] = data1[1];
	data2[10] = '\0';
}
void test_iso(void)
{
	char data1[1000];
	char data2[1000];
	while (scanf("%s", data1) != EOF)
	{
	iso(data1, data2);
	printf("%s\n", data2);
    }
}



//PROBLEMA E



void snake(const char* camelo, char *cobra, int size)
{
	int i = 0;
	int i2 = 0;
	while(i2 <= size)//enquanto o indice do array inicial e menor que o seu tamanho	
	{
		if(camelo[i2] < 91 && camelo[i2] > 64)//representam todas as letras maiusculas do alfabeto
		{
			cobra[i] = '_';
			cobra[i+1] = camelo[i2] + 32;//vai somar 32 para transformar as letras maiusculas em minusculas
			i += 2;
			i2++;
		}
		else
		{
			cobra[i] = camelo[i2];//os dois arrays serao iguais visto que o array inicial nao tera letras maiusculas iniciais
			i++;
			i2++;
		}
		
	}
}

int str_len(const char *camelo)//para saber o comprimento da string camelo
{
	int result = 0;
	while (camelo[result] != '\0')
		result++;
	return result;
}

void test_snake(void)
{
	char camelo[1000];
	char cobra[1000];
	while (scanf("%s", camelo) != EOF)//vai ler o array de caracter do camelo com as letras maisculuas
	{
	int size = str_len(camelo);//vai me dar o tamanho do array de caracteres camelo
	snake(camelo,cobra, size);//declarar a funcao snake
	printf("%s\n", cobra);//vai dar print ao array de caracteres cobra com os underscores colocados entre cada palavra
}
}



int main(int argc, char **argv)
{
unit_test();
int x = 'A';
if (argc > 1);
x = *argv[1];
if ( x == 'A')
test_isv();
 else if (x == 'B')
test_daily_weekly_average();
 /*else if (x == 'C')
 test_();
 */
 else if (x == 'D')
 test_iso();
 else if (x == 'E')
 test_snake();
 /*else if (x == 'F')
 test_(); 
 else if (x == 'G')
 printf("All unit tests PASSED.\n"); 
 else 
 printf("%s: Invalid option.\n", argv[1]);
 return 0;
 */
} 