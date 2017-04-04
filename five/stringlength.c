#include <stdio.h>

/* strlen: find the length of string s. */
int strlen(char *s) /* This is the first way to do this. */
{
  int n;

  for (n = 0; *s != '\0'; s++)
    n++;

  return n;
}
