#include <stdio.h>

/* echo command-line arguments; 1st version */
main(int argc, char *argv[])
{
  int i;

  for (i = 1; i < argc; i++) {
    printf("%s%s", argv[i], (i < argc) ? " " : "");
  printf("\n");
  return 0;
  }
}
