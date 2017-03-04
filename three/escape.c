#include <stdio.h>

int escape(char * s, char * s);

int main(void)
{
    char text1[50] = "\aHello,\n\tWorld! Mistakee \bwas \"Extra 'e'\"!\n"
    char text2[52];

    printf("Original string:\n%s\n", text1);

    escape(text1, text2);
    printf("Escaped string:\n%s\n", text2);

    return 0;
}


int escape(char * s, char * t)
{
    int i, j;
    i = j = 0;

    while (t[i]) {
        switch (t[i]) {
        case '\n':
            s[j++] = '\\';
            s[j] = 'n';
            break;

        case '\t':
            s[j++] = '\\';
            s[j] = 't';
            break;

        case '\a':
            s[j++] = '\\';
            s[j] = 'a';
            break;

        case '\b':
            s[j++] = '\\';
            s[j] = 'b';
            break;

        case '\f':
            s[j++] = '\\';
            s[j] = 'f';
            break;

        case '\r':
            s[j++] = '\\';
            s[j] = 'r';
            break;

        case '\v':
            s[j++] = '\\';
            s[j] = 'v';
            break;

        case '\\':
            s[j++] = '\\';
            s[j] = '\\';
            break;

        case '\"':
            s[j++] = '\\';
            s[j] = '\"';
            break;

        default:
            s[j] = t[i];
            break;
        }
        ++i;
        ++j;
    }
    s[j] = t[i];
}
