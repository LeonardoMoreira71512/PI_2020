//Problema 3 da Festa

#include <stdio.h>

int difh (int horai, int mini, int horaf, int minf, int h, int m)
{
	return (horai*60 + mini*horaf*60 + minf) / 2 >= h*60 + m ? ((h*60+m) - (horai*60+mini)) / 60 : ((horaf*60+minf) - (h*60+m)) / 60;
}

int difm (int horai, int mini, int horaf, int minf, int h, int m)
{
	return (horai*60 + mini*horaf*60 + minf) / 2 >= h*60 + m ? ((h*60+m) - (horai*60+mini)) % 60 : ((horaf*60+minf) - (h*60+m)) % 60;
}

int sum(int horai, int mini, int horaf, int minf, int h, int m)
{
	return difh(horai, mini, horaf, minf, h, m) * (difh(horai, mini, horaf, minf, h, m) + 1) * (2 * difh(horai, mini, horaf, minf, h, m) + 1) / 6;
}

int precoh(int horai, int mini, int horaf, int minf, int h, int m)
{
	return sum(horai, mini, horaf, minf, h, m) * 10 * 60;
}

int precom(int horai, int mini, int horaf, int minf, int h, int m)
{
	return (difm(horai, mini, horaf, minf, h, m) + 1) * (difh(horai, mini, horaf, minf, h, m) + 1) * 10 * difm(horai, mini, horaf, minf, h, m);
}

int multa(int horai, int mini, int horaf, int minf, int h, int m)
{
	return precoh(horai, mini, horaf, minf, h, m) + precom(horai, mini, horaf, minf, h, m);
}

void test_operation(void)
{
	int horai;
	int mini;
	int horaf;
	int minf;
	int h;
	int m;
	scanf("%d%d%d%d", &horai, &mini, &horaf, &minf);
	while(scanf("%d%d", &h, &m) != EOF)
	{
       int euros = multa(horai, mini, horaf, minf, h, m) / 100;
       int centimos = multa(horai, mini, horaf, minf, h, m) % 100;
       printf("%d.%.2d\n", euros, centimos);
	}
}

int main(void)
{
	test_operation();
	return 0;
}