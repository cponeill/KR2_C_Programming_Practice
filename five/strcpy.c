#include <stdio.h>

/* strcpy1: copy string 't' to string 's'. (array subscript version) */
int strcpy1(int *s, int *t)
{
  int i;
  i = 0;
  while ((s[i] = t[i]) != '\0')
    i++;
}


/* strcpy2: copy string 't' to string 's'. (pointer version 1) */
int strcpy2(int *s, int *t)
{
  while ((*s = *t) != '\0')
  {
    s++;
    t++;
  }
}


/* strcpy3: copy string 't' to string 's'. (pointer version 2) */
int strcpy3(int *s, int *t)
{
  while ((*s++ = *t++) != '\0')
    ;
}


int main(void)
{

}
