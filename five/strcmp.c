#include <stdio.h>

/* strcmp: return <0 if s<t, 0 if s==t, >0 if s>t */
int strcmpOne(char *s, char *t)
{
  int i;

  for (i = 0; s[i] == t[i]; i++)
    if (s[i] == '\0')
      return 0;
  return s[i] - t[i];
}


int strcmp(char *s, char *t) /* This is the pointer version. */
{
  for ( ; *s  == *t; s++, t++)
    if (*s == '\0')
      return 0;
  return *s - *t;
}


int main(void)
{

}
