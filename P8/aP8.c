
#include <stdio.h>
#include <assert.h>
#include "our_ints.h"

//Problema A
int ints_greater_than(const int *a, int n, int x, int *b)
{
  int result = 0;
  for(int i = 0; i < n; i++)
  { 
    if(a[i] > x)
    {
      b[result++] = a[i];
    }
  }
  return result;
}

void test_ints_greater_than(void)
{
  int a[1000];
  int n = ints_get_until(-1, a);
  int x;
  while(scanf("%d", &x) != EOF)
  {
    int b[1000];
    int m = ints_greater_than(a, n, x, b); //m = nº posições de b.
    ints_println_special(b, m);
  }
}

//Problema B
int ints_less_than(const int *a, int n, int x, int *b)
{
  int result = 0;
  for(int i = 0; i < n; i++)
  {
    if(a[i] < x)
    {
      b[result++] = a[i];
    }
  }
  return result;
}

void test_ints_less_than(void)
{
  int a[1000];
  int n = ints_get_until(-1, a);
  int x;
  while(scanf("%d", &x) != EOF)
  { 
    int b[1000];
    int m = ints_less_than(a, n, x, b); //m = nº posições de b.
    ints_println_special(b, m);
  }
}

//Problema C
int ints_digits_sums(int *a, int n, int *b)
{
  int digit;
  int digits_sums;
  int result = 0;
  for(int i = 0; i < n; i++)
  {
    digit = a[i];
    digits_sums = 0;
    while(digit > 0)
    { 
      digits_sums = digits_sums + digit % 10;
      digit /= 10;
    }
    b[result++] = digits_sums;
  }
  return result;
}

void test_ints_digits_sums(void)
{
  int a[1000];
  int n = ints_get_until(-1, a);
  int b[1000];
  int m = ints_digits_sums(a, n, b);
  ints_println_special(b, m);
}

//Problema D
int ints_append(const int *a, int n, const int *b, int x, int *c)
{
  int result = 0;
  for(int i = 0; i < n; i++)
  {
    c[result++] = a[i];
  }
  for(int i = 0; i < x; i++)
  {
    c[result++] = b[i];
  }
  return result;
}

void test_ints_append(void)
{
  int a[1000];
  int n = ints_get_until(-1, a);
  int b[1000];
  int m = ints_get_until(-1, b);
  int c[1000];
  int x = ints_append(a, n, b, m, c);
  ints_println_special(c, x);
  int z = ints_append(b, m, a, n, c);
  ints_println_special(c, z);
}

//Problema E
int ints_take(const int *a, int n, int x, int*b)
{
  int result = 0;
  for(int i = 0; i < n; i++)
  {
    if(i < x)
    {
      b[result++] = a[i];
    }
  }
  return result;
}

void test_ints_take(void)
{
  int a[1000];
  int n = ints_get_until(-1, a);
  int x;
  while(scanf("%d", &x) != EOF)
  {
    int b[1000];
    int m = ints_take(a, n, x, b);
    ints_println_special(b, m);
  }
}

//Problema F
int ints_drop(const int *a, int n, int x, int*b)
{
  int result = 0;
  for(int i = 0; i < n; i++)
  {
    if(i >= x)
    {
      b[result++] = a[i];
    }
  }
  return result;
}

void test_ints_drop(void)
{
  int a[1000];
  int n = ints_get_until(-1, a);
  int x;
  while(scanf("%d", &x) != EOF)
  {
    int b[1000];
    int m = ints_drop(a, n, x, b);
    ints_println_special(b, m);
  }
}

//Problema G
int ints_ascending(const int *a, int n, int *b)
{
  int max;
  b[0] = a[0];
  int result = 1;
  if(n < 1)
  {
    result = 0;
  }
  for(int i = 1; i < n; i++)
  {   
    max = ints_max(a, i);
    if(a[i] >= max)
    {
      b[result++] = a[i];
    }
  }
  return result;
}

void test_ints_ascending(void)
{
  int a[1000];
  int n = ints_get_until(-1, a);
  int b[1000];
  int m = ints_ascending(a, n, b);
  ints_println_special(b, m);
}

//Problema H
int ints_accumulate(const int *a, int n, int *b)
{
  int result = 0;
  for(int i = 0; i < n + 1; i++)
  {
    b[result++] = ints_sum(a, i);
  }
  return result;
}

void test_ints_accumulate(void)
{
  int a[1000];
  int n = ints_get_until(-1, a);
  int b[1000];
  int m = ints_accumulate(a, n, b);
  ints_println_special(b, m);
}

//Problema I
int ints_unaccumulate(const int *a, int n, int *b)
{
  int result = 0;
  for(int i = 0; i < n - 1; i++)
  {
    b[result++] = a[i + 1] - a[i];
  }
  return result;
}

void tets_ints_unaccumulate(void)
{
  int a[1000];
  int n = ints_get_until(-1, a);
  int b[1000];
  int m = ints_unaccumulate(a, n, b);
  ints_println_special(b, m);
}

//Problema J
int ints_find_triple(const int *a, int n)
{
  int result = -1;
  for(int i = 0; i < n-2; i++)
  {
    if( a[i] == a[i + 1] && a[i] == a[i + 2])
    {
      result = i;
      return result;
    }
  }
  return result;
}

void test_ints_find_triple(void)
{
  int a[1000];
  int n = ints_get(a);
  int m = ints_find_triple(a, n);
  printf("%d\n", m);
}

void unit_tests_ints_greater_than(void)
{ 
  int a1[6] = {6, 7, 5, 4, 2, 8};
  int b1[1000];
  assert(ints_greater_than(a1, 6, 5, b1) == 3 && b1[0] == 6 && b1[1] == 7 && b1[2] == 8);
  assert(ints_greater_than(a1, 6, 7, b1) == 1 && b1[0] == 8);
  assert(ints_greater_than(a1, 6, 2, b1) == 5 && b1[0] == 6 && b1[1] == 7 && b1[2] == 5 && b1[3] == 4 && b1[4] == 8);
  assert(ints_greater_than(a1, 6, 8, b1) == 0);
}

void unit_tests_ints_less_than(void)
{ 
  int a2[6] = {6, 7, 5, 4, 2, 8};
  int b2[1000];
  assert(ints_less_than(a2, 5, 7, b2) == 4 && b2[0] == 6 && b2[1] == 5 && b2[2] == 4 && b2[3] == 2);
  assert(ints_less_than(a2, 6, 5, b2) == 2 && b2[0] == 4 && b2[1] == 2);
  assert(ints_less_than(a2, 6, 8, b2) == 5 && b2[0] == 6 && b2[1] == 7 && b2[2] == 5 && b2[3] == 4 && b2[4] == 2);
  assert(ints_less_than(a2, 4, 6, b2) == 2 && b2[0] == 5 && b2[1] == 4);
}

void unit_tests_ints_digits_sums(void)
{ 
  int a3[6] = {15, 84, 54, 85, 26, 78};
  int b3[1000];
  assert(ints_digits_sums(a3, 6, b3) == 6 && b3[0] == 6 && b3[1] == 12 && b3[2] == 9 && b3[3] == 13 && b3[4] == 8 && b3[5] == 15);
  assert(ints_digits_sums(a3, 3, b3) == 3 && b3[0] == 6 && b3[1] == 12 && b3[2] == 9);
  assert(ints_digits_sums(a3, 4, b3) == 4 && b3[0] == 6 && b3[1] == 12 && b3[2] == 9 && b3[3] == 13);
  assert(ints_digits_sums(a3, 1, b3) == 1 && b3[0] == 6);
}
  
void unit_tests_ints_append(void) 
{ 
  int a4[6] = {2, 4, 6, 9, 7, 5};
  int b4[5] = {10, 5, 8, 7, 8};
  int c1[1000];
  assert(ints_append(a4, 6, b4, 5, c1) == 11 && c1[0] == 2 && c1[1] == 4 && c1[2] == 6 && c1[8] == 8 && c1[9] == 7 && c1[10] == 8);
  assert(ints_append(a4 ,4, b4, 3, c1) == 7 && c1[0] == 2 && c1[1] == 4 && c1[2] == 6 && c1[3] == 9 && c1[4] == 10 && c1[5] == 5 && c1[6] == 8);
  assert(ints_append(a4, 2, b4, 1, c1) == 3 && c1[0] == 2 && c1[1] == 4 && c1[2] == 10);
  assert(ints_append(a4, 1, b4, 3, c1) == 4 && c1[0] == 2 && c1[1] == 10 && c1[2] == 5 && c1[3] == 8);
}
  
void unit_tests_ints_take(void)
{ 
  int a5[5] = {1, 2, 3, 4, 5};
  int b5[1000];
  assert(ints_take(a5, 5, 2, b5) == 2 && b5[0] == 1 && b5[1] == 2);
  assert(ints_take(a5, 5, -1, b5) == 0);
  assert(ints_take(a5, 5, 6, b5) == 5 && b5[0] == 1 && b5[1] == 2 && b5[2] == 3 && b5[3] == 4 && b5[4] == 5);
  assert(ints_take(a5, 5, 3, b5) == 3 && b5[0] == 1 && b5[1] == 2 && b5[2] == 3);
}
  
void unit_tests_ints_drop(void)
{   
  int a6[5] = {1, 2, 3, 4, 5};
  int b6[1000];
  assert(ints_drop(a6, 5, 2, b6) == 3 && b6[0] == 3 && b6[1] == 4 && b6[2] == 5);
  assert(ints_drop(a6, 5, -1, b6) == 5 && b6[0] == 1 && b6[1] == 2 && b6[2] == 3 && b6[3] == 4 && b6[4] == 5);
  assert(ints_drop(a6, 5, 6, b6) == 0);
  assert(ints_drop(a6, 5, 3, b6) == 2 && b6[0] == 4 && b6[1] == 5);
}
  
void unit_tests_ints_ascending(void)
{ 
  int a7[5] = {1, 2, 3, 4, 5};
  int b7[1000];
  assert(ints_ascending(a7, 5, b7) == 5 && b7[0] == 1 && b7[1] == 2 && b7[2] == 3 && b7[3] == 4 && b7[4] == 5);
  assert(ints_ascending(a7, 3, b7) == 3 && b7[0] == 1 && b7[1] == 2 && b7[2] == 3);
  assert(ints_ascending(a7, 4, b7) == 4 && b7[0] == 1 && b7[1] == 2 && b7[2] == 3 && b7[3] == 4);
  assert(ints_ascending(a7, 1, b7) == 1 && b7[0] == 1);
}

void unit_tests_ints_accumulate(void)
{
  int a8[5] = {7, 6, 9, 9, 33};
  int b8[1000];
  assert(ints_accumulate(a8, 3, b8) == 4 && b8[0] == 0 && b8[1] == 7 && b8[2] == 13);
  assert(ints_accumulate(a8, 5, b8) == 6 && b8[0] == 0 && b8[1] == 7 && b8[2] == 13 && b8[3] == 22 && b8[4] == 31 && b8[5] == 64);
  assert(ints_accumulate(a8, 1, b8) == 2 && b8[0] == 0);
  assert(ints_accumulate(a8, 4, b8) == 5 && b8[0] == 0 && b8[1] == 7 && b8[2] == 13 && b8[3] == 22);  
}
  
void unit_tests_ints_unaccumulate(void)
{ 
  int a9[6] = {0, 7, 13, 22, 31, 64};
  int b9[1000];
  assert(ints_unaccumulate(a9, 1, b9) == 0);
  assert(ints_unaccumulate(a9, 4, b9) == 3 && b9[0] == 7 && b9[1] == 6 && b9[2] == 9);
  assert(ints_unaccumulate(a9, 6, b9) == 5 && b9[0] == 7 && b9[1] == 6 && b9[2] == 9 && b9[3] == 9 && b9[4] == 33);
  assert(ints_unaccumulate(a9, 2, b9) == 1 && b9[0] == 7);  
}
    
void unit_tests_ints_find_triple(void)
{
  int a10[10] = {1, 2, 2, 2, 3, 4, 5, 6, 6, 6};
  assert(ints_find_triple(a10, 10) == 1);
}

void unit_tests(void)
{
  unit_tests_ints_greater_than();
  unit_tests_ints_less_than();
  unit_tests_ints_digits_sums();
  unit_tests_ints_append();
  unit_tests_ints_take();
  unit_tests_ints_drop();
  unit_tests_ints_ascending();
  unit_tests_ints_accumulate();
  unit_tests_ints_unaccumulate();
  unit_tests_ints_find_triple();
}

int main(int argc, char **argv) 
{
unit_tests();
 int x = 'A';
 if (argc > 1)
 x = *argv[1];
 if (x == 'A')
 test_ints_greater_than();
 else if (x == 'B')
 test_ints_less_than();
 else if (x == 'C')
 test_ints_digits_sums();
 else if (x == 'D')
 test_ints_append();
 else if (x == 'E')
 test_ints_take();
 else if (x == 'F')
 test_ints_drop();
 else if (x == 'G')
 test_ints_ascending();
 else if (x == 'H')
 test_ints_accumulate();
 else if (x == 'I')
 tets_ints_unaccumulate();
 else if (x == 'J')
 test_ints_find_triple();
 else if (x == 'U')
 printf("All unit tests PASSED.\n"); 
 else 
 printf("%s: Invalid option.\n", argv[1]);
 return 0;
}