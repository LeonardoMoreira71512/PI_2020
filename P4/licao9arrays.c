//lição 9 sobre arrays

#include <stdio.h>

int digitos_num_positivo(int x)// usamos a função para contar o numero de digitos de um numero maior que 0
{ 
	int result = 0;
	while(x > 0)
	{
      result++;
      x /= 10; //significa que o x esta a ser dividido por 10, ou seja, se x for 20 o resultado será 2
	}
	return result;
}

int digitos_num_naturais// usamos a função para contar os digitos de um numero natural, ou seja, que inclua o zero
{
	int result = 1;
	if (x > 0)
	{
	 result = int digitos_num_positivos(x);
	 return result;
	}
}

