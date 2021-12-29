//Problema F

#include<stdio.h>
#include<assert.h>
#include"our_ints.h"
#include"our_doubles.h"

int count(int i,int f)
{
  int result=0;
  while(i<f)
  {
    result++;
    i++;
  }
  return result-1;
}


int bang(const int *a,int n ,int x) 
{
  int result=0;
  int i=1;
  int contarmin=(a[0]>1)? count(1,a[0]) :10000;
  int contarultimo=(x-a[n-1]>0)? count(a[n-1],x) :10000;
  result=a[0] - (count(1,a[0])+1);
  while(i<n)
  {
    if(contarmin > count(a[i-1],a[i]) && count(a[i-1],a[i])!=0)
    {
      contarmin=count(a[i-1],a[i]);
      result=a[i-1]+1;
    }
    i++;
  }
  return (contarmin> contarultimo)? x - contarultimo :result;
}


void teste_golos(void)
{
   int a[1000];
   int d;
   scanf("%d",&d);
   int n=ints_get(a);
   printf("%d\n",bang(a,n,d));
}

int main(void)
{
 teste_golos();
 return 0;
}