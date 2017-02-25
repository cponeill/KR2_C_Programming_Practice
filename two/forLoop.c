#include <stdio.h>

#define MAX_STRING_LENGTH 100

int main(void)
{

    int = 0,
          lim = MAX_STRING_LENGTH,
           c;
    char s[MAX_STRING_LENGTH];

    while (i < (lim - 1))
    {
        c = getchar();

        if (c == EOF)
            break;
        else if (c == '\n')
            break;
        s[i++] = c;
    }
    s[i] = '\0';
    return 0;
}
