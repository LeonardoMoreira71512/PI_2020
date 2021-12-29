//Problema D

#include <stdio.h>

int my_half(int x, int y)
{
	return x == 0 || x == 1 ? y: my_half(x-2, y+1);
	
}

int half (int x)
{
return my_half(x, 0);
}
int main (void)
{
int x;
scanf("%d", &x);
int z = half(x);
printf("%d\n", z);
return 0;
}