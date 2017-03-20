#include <stdio.h>

/* swap: swap integer x with integer y. */
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Swap!\n");
    printf("%d\n%d\n", x, y);
}

int main(void)
{
    int x = 3;
    int y = 4;
    printf("Normal\n");
    printf("%d\n%d\n", x, y);
    swap(x, y);
}
