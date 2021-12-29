//Problema 2 da festa

#include <stdio.h>
#include <math.h>

int primeiros(int num)
{
    return num < 100 ? num : primeiros(num / 10);//	da me os 2 primeiros numeros
}
int cont_numero(int num)
{
    return num < 100 ? 0 : cont_numero(num/10) + 1;//conta quantos numeros restam
}

int num_fim(int num)
{
    return pow (10, cont_numero(num)) * primeiros(num);//arredonda todos os numeros depois dos 2 primeiros para 0
}

void test_biden(void) 
{
    int num;
    while (scanf("%d",&num) != EOF) 
    {
        int z = num_fim(num);
        printf ("%d\n", z);
    }
}


int main (void) 
{
    test_biden();
    return 0;
}