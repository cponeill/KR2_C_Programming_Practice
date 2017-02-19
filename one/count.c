#include <stdio.h>

/* count characters in input; 1st version */

int count()
{

    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            nl++;
    printf("%d\n", c);
}


main()
{
    count();
}
