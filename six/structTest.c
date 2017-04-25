#include <stdio.h>

struct point {
  int x;
  int y;
};

int main(void)
{
  struct point pt;
  pt.x = 1;
  pt.y = 2;

  printf("[%d,%d]\n", pt.x, pt.y);
}
