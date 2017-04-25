#include <stdio.h>
#include <ctype.h>

/* lower: convert input to lowercase. */
int main(void)
{
  int c;
  while ((c = getchar()) != EOF)
    putchar(tolower(c));
  return 0;

}
