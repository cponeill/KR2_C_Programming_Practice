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
    /* Enter code here */
}
