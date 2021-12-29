#include<stdio.h>
#include<assert.h>
#include"our_ints.h"
#include"our_doubles.h"


int contar(int *a,int inicio,int fim)//vai contar simplesmente 
{
 int result =0;
  while (inicio<fim)
  {
    if(a[inicio]<=0)
    {
      result++;
    }
    inicio++;
  }
  return result;
}

int contarano(int *a,int n)//calcula onumero de anos em que a temperatura minima foi zero graus ou menos em pelo menos tres dias de dezembro
{
  int result =0;
  int f=n/31;
  int i=1;
  while(i<=f)
  {
    if(contar(a,(i-1)*31,i*31)>=3)
    {
      result++;
    }
    i++;
  }
  return result;
}

int ultimoano(int *a,int n)//vai saber qual foi o ano mais recente em que aconteceu
{
  int f=n/31;
  int g=0;
  int i=1;
  while(i<=f)
  {
    if(contar(a,(i-1)*31,i*31)>=3)
    {
      g=i;
    }
    i++;
  }
  return f-g+1;
}

void teste_temperatura(void)
{
   int a[3100];
   int n=ints_get(a);
   int d=contarano(a,n);
   int f=ultimoano(a,n);
   if(d>0)
   printf("%d %d\n",d,f);//pq tenho saber qual o ano mais recente caso tenha acontecido
   else if(d==0)
    printf("%d\n",d);
}

int main(void)
{
 teste_temperatura();
 return 0;
}