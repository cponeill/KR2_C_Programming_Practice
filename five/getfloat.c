#include <ctype.h>
#include <stdio.h>

/* getfloat: the floating point analog of getint. */

int getch(void);
void ungetch(int);

int get
{
    int c, sign;

    while (isspace(c) && c != EOF && c != '+' && c != '-')
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }

    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn = sign;
    if (c != EOF)
        ungetch(c);
    return c;
}

/* getch and ungetch functions. */
#include <stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters.\n");
    else
        buf[bufp++] = c;
}
