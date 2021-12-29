#include<stdio.h>
#include<assert.h>
#include"our_ints.h"
#include"our_doubles.h"

int diferenca(const int *a, int n,int *b) 
{
  int result =0;
  int i=0;
  while (i< n-1)
  { 
    b[result++]=a[i+1]-a[i];
    i++;
  }
  return result;
}
int contar_subidas(const int *a,int n)
{
  int result=0;
 while((a[result]>=0) && (result<n))
 {
  result++;
 }
  return result;
}

int contar_negativos(const int *a,int n)
{
  int result=0;
 while((a[result]<0) && (result<n))
 {
  result++;
 }
  return result; 
}

int negativos(const int *a, int n, int *b) 
{
  int result = 0;
  int i= 0;
  while (i< n)
  { 
    int z=contar_subidas(a+i,n-i);
    int y=contar_negativos(a+i,n-i);
    if(z>0)
    {
      i+=z;
    }
    else if(y>0)
    {
      b[result++]=y;
      i+=y;
    }
  }
  return result;
}


int contar_trimestres(int *a, int n) 
{
  int result =0;
  int i= 0;
  while (i< n)
  { 
    if(a[i]>=2)
    {
      result++;
    }
     i++;
  }
  return result;
}

int indices(const int *a, int n, int *b) 
{
  int result = 0;
  int i= 0;
  while (i< n)
  { 
    int z=contar_subidas(a+i,n-i);
    int y=contar_negativos(a+i,n-i);
    if(z>0)
    {
      i+=z;
    }
    else if(y>0)
    {
      b[result++]=i;
      i+=y;
    }
  }
  return result;
}

int possicao(const int *a, int n, int *b) 
{
  int result = 0;
  int i= 0;
  while (i< n)
  { 
    if(a[i]>=2)
    {
      b[result++]=i;
    }
  i++;
  }
  return result;
}

int possicaoo(const int *a, int n, int *b) 
{
  int result = 0;
  int i= 0;
  while (i< n)
  { 
    if(a[i]>=2)
    {
      b[result++]=a[i]+1;
    }
  i++;
  }
  return result;
}

int tirar(const int *a, int n, int *b,int *c) 
{
  int result = 0;
  int i= 0;
  while (i< n)
  { 
    c[result++]=a[b[i]];
    i++;
  }
  return result;
}


void teste_recessoes(void)
{
  int a[1000];
  int b[1000];
  int n=ints_get(a);
  int na=diferenca(a,n,b);
  
  int c[1000];
  int nb= negativos(b,na,c);
  
  int nc=contar_trimestres(c,nb);
  printf("%d\n", nc);
  int d[1000];
  indices(b,na,d);

  int e[1000];
  int ne=possicao(c,nb,e);

  int f[1000];
  int nf=possicaoo(c,nb,f);

  int g[1000];
  tirar(d,ne,e,g);
  

  ints_print_two(g,f,nf);
}

int main(void)
{
 teste_recessoes();
 return 0;
}
