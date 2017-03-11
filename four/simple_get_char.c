#include <stdio.h>

int main(void)
{
    int c;
    while (1) {
        c = getchar();
        if (c == EOF) { break; }
        putchar(c);
    }
}
