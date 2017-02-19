#include <stdio.h>

/* copy the input to output; 2nd version */

int countInput()
{

    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

}


int verify()
{

   int c;

    while ((c = getchar()) != EOF) {
        printf("\n%i\n", c != EOF);
        printf("\n%d\n", EOF);
        return 0;
    }

}

main()
{
    verify();
}
