#include<stdio.h>
#include<assert.h>
#include"our_ints.h"
#include"our_doubles.h"

int str_find(const char*t, char x)
{
	for(int i = 0; t[i] != '\0'; i++)
	{
		if(t[i] == x)
		{
			return i;
		}
	}
	return -1;
}

int alpha2(const char*t, const char*s)
{
	int z = str_find(t, *s);
	return z != -1 && str_find(t + z + 1, s[1]) != -1;
}

void test_alfa_2(void)
{
	char*pais2[2] = {"NO", "YES"};
	char s[1000];
	scanf("%s", s);
	char t[1000];
	while (scanf("%s", t) != EOF)
	{
		int z = alpha2(t,s);
		printf("%s\n", pais2[z]);
	}
}

void unit_test_str_find(void)
{
	assert(str_find("abcdedfghi", 'a') == 0);
	assert(str_find("abcdedfghi", 'd') == 3);
	assert(str_find("abcdedfghi", 'g') == 7);
	assert(str_find("abcdedfghi", 'i') == 9);
	assert(str_find("abcdedfghi", 'p') == -1);
	assert(str_find("", 'z') == -1);
}

int main(void)
{
	unit_test_str_find();
	test_alfa_2();
	return 0;
}