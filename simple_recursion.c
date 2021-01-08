#include <stdio.h>
#include <stdlib.h>

int triangle(int n)
{
  // x+ (x-1)+ (x) until x = 1 and then add one
  // base case
  if (n <= 1)
    return 1;
  else
    return n + triangle(n - 1);
}

int fibonacci(int n)
{
  // x+ (x-1)+ (x) until x = 1 and then add one
  // base case
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n-2);
}

int main(void)
{

  int t;
  int n = 5;
  t = triangle(n);
  printf("The value of triangle called %d times is %d\n", n, t);
  int nf;
  int f = 5;
  f = fibonacci(f);
  printf("The value of fibonacci order %d is %d\n", n, f);
  return 0;
}