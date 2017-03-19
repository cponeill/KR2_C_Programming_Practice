#include <stdio.h>

int main(void)
{
    int i, j;
    i = 1;
    j = ++i;
    printf("i:%d\nj:%d\n", i, j);

    i = 1;
    j = i++;
    printf("i:%d\nj:%d\n", i, j);
}
