#include <string.h>

/* strend: returns 1 if string 't' occurs at the end of the string 's', 0 if otherwise. */
int strend(char *s, char *t);

int main(void)
{
  char *s = "the world is over";
  char *t = "over";

  if (strend(s, t))
      printf("The text '%s' occurs at the end of the string '%s'", t, s);
  else
      printf("Test failed.");

  return 0;
}


int strend(char *s, char *t)
{
  s += (strlen(s) - strlen(t));

  while (*s++ == *t++)
    if (*s != '\0')
      return 1;
  return 0;
}

