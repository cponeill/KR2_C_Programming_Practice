#include <stdio.h>

/* simpleCount: Sum the value of n integers. */
int simpleCount(int n)
{
  int i, count = 0;
  for (i; i <= n; i++)
    count += i;
  return count;
}

int main(void)
{
  int number = 10;
  printf("%d\n", simpleCount(number));
}
