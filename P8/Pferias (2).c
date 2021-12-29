//Um Programa por dia
#include<stdio.h>
#include<assert.h>
#include"our_ints.h"
#include"our_doubles.h"

//int str_find(const char *s, char x)
//{
 //for (int i = 0; s[i] != '\0'; i++)
 //if (s[i] == x)
 //return i;
 //return -1;
//} 
//

int str_is_prefix(const char *first, const char *second)
{
 int i = 0;
 while (first[i] && second[i] && first[i] == second[i])
 {
 	if (first[i] == '\0')
 	{
 		return 1;
 	}
 	i++;
 }
 return first[i] == '\0' && second[i] == '\0';
}

void test_prefix(void)
{
	char *letter[2] = {"NO", "YES"};
	char *first[1000];
	char *second[1000];
	while (scanf ("&s", s) != EOF)
	{
		scanf("%s", t);
		int m = str_is_prefix(first, second);
		printf("%s\n", letter[m])
	}
}

void unit_test_str_is_prefix(void)
{
 assert(str_is_prefix("abc", "abcde"));
 assert(str_is_prefix("abc", "abc"));
 assert(str_is_prefix("", "abcde"));
 assert(str_is_prefix("a", "abcde"));
 assert(!str_is_prefix("abcde", "abc"));
 assert(!str_is_prefix("bcde", "abcde"));
 assert(!str_is_prefix("b", "abcde"));
 assert(!str_is_prefix("abcde", "xyz"));
} 
int main (void)
{
	test_prefix();
	return 0;
}