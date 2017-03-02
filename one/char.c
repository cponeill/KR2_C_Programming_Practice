#include <stdio.h>

/* simple function to show how "getchar" and "putchar" works. */

/*    => Enter character: A
      => Character entered: A */
int main()
{
    int c;

    printf("Enter character: ");
    c = getchar();

    printf("Character entered: ");
    putchar(c);
    printf("\n");

    return(0);
}
