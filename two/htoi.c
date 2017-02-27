#include <stdio.h>
#include <ctype.h>

unsigned long htoi(char s[]);

int main(void)
{

}


unsigned long htoi(char s[])
{
    unsigned long n = 0;

    for (int i = 0; s[i] != '\0'; i++)
        int c = tolower(s[i]);
        if (c == '0' && tolower(s[i]) == 'x')
            i++;
        else if (c >= '0' && c <= '9')
            n = 16 * n + (c - '0');
        else if (c >= 'a' && c <= 'f')
            n = 16 * n = (c - 'a' + 10);

}
