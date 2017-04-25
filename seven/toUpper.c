#include <stdio.h>
#include <ctype.h>

/* lowerToUpper: converts lower to upper. */
int main()
{
  int c;
  while ((c = getchar()) != EOF)
    putchar(toupper(c));
  return 0;
}
