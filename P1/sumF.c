// Problema F

#include <stdio.h>

int concatenate (int x, int y, int w) 
{
	w *=10;
    return w > y ? w * x + y : concatenate (x, y, w);     
}

int main (void)
{
int x;
int y;
int w;
w = 1;
scanf("%d%d", &x, &y);
int z = concatenate(x, y, w);
printf("%d\n", z);
return 0;
}