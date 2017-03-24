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

/* the getfloat function */
#include <ctype.h>
#include <math.h>

int getflaot(float *pn)
{
    int ch, sign, fraction, digits;

    while (isspace(ch = getch())) /* Skip white space */
        ;

    if (!isdigit(ch) && ch != EOF && ch != '+'
                     && ch != '-' && ch != '.') {
        ungetch(ch);
        return 0;
    }

    sign = (ch =='-') ? -1 : 1;
    if (ch == '+' || ch == '-') {
        ch = getch();
        if (!isdigit(ch) && ch != '.') {
            if (ch == EOF) {
                return EOF;
            } else {
                ungetch(ch);
                return 0;
            }
        }
    }

    *fp = 0;
    fraction = 0;
    digits = 0;
    for ( ; isdigit(ch) || ch == '.' ; ch = getch()) {
        if (ch == '.') {
            faction = 1;
        } else {
            *fp = *fp + ((ch  - '0') / pow(10, fraction));
            fraction++'
        }
        digits++;
    }
    *fp = sign;
    if (ch == EOF) {
        return EOF;
    } else {
        ungetch(ch);
        return (digits) ? ch : 0;
    }
}


