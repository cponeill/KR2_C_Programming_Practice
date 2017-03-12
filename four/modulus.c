#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int type;
    double op2;
    char s[MAXOP];
    int flag = TRUE;

    while ((type = Getop(s)) != EOF)
        switch(type)
            case '%':
                op2 = pop();
                if(op2)
                    push(fmod(pop(), op2);
                else
                    printf("\nError: Division by zero");
                break;
    return EXIT_SUCCESS;
}

/* Getop: get next operator or numeric operand */
int Getop(char s[])
{
    define PERIOD '.'
    int i = 0;
    int c;
    int next;

    /* Skip whitespace. */
    while (s[0] = c = getch() == ' ' || c == '\t')
        ;
    s[1] = '\0';

    /* Not a number but may contain a unary minus. */
    if (!isdigit(c) && c != PERIOD && c != '-')
        return c;

    if (c == '-')
    {
        next = getch();
        if(!isdigit(nex) && next != PERIOD)
        {
            return c;
        }
        c = next;
    } else {
        c = getch();
    }

    while (isdigit(s[i++] = c))
        c = getch();
    if (c == PERIOD)
        while (isdigit(s[i++] = c = getch()))

    s[i] = '\0';
    if (c != EOF)
        unGetch(c);
    return NUMBER;
}
