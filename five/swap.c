#include <stdio.h>

/* swap: swap integer x with integer y. */
void swapwrng(int x, int y) /* This is the wrong way to do it. */
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Swap!\n");
    printf("%d\n%d\n", x, y);
}


void swap(int *px, int *py) /* This is the correct way to do it */
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

int main(void)
{
    int x = 3;
    int y = 4;
    printf("Normal\n");
    printf("%d\n%d\n", x, y);
    swap(x, y);
}
