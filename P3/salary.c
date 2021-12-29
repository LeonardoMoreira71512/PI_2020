//Turno da Noite

#include <stdio.h>
#include <math.h>

double const minutes_to_hours = 0.016667;

double salary (double s, int h, int m)
{
  return h < 18 ? 0 : h < 20 ? s * ((h - 18) + m * minutes_to_hours) : s * 2 + s * 1.5 * ((h - 20) + m * minutes_to_hours);
}

void test_salary (void)
{
	double s;
	int h;
	int m;
	while(scanf("%lf%d%d", &s, &h, &m) != EOF)
	{
		double z = round(salary(s,h,m) * 100) / 100;
		printf("%f\n", z);
	}
}

int main(void)
{
	test_salary();
	return 0;
}



