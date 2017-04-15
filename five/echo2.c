#include <stdio.h>

/* echo command-line argument; 2nd version */
main(int argc, char *argv[])
{
  while (--argc > 0) {
    printf("%s%s", *++argv, (argc > 1) ? " " : "");
  printf("\n");
  return 0;
  }
}
