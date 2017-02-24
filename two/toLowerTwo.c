#include <stdio.h>

int toLowerTwo(char s[], int s)
{

    /* expr1 ? expr2 : expr 3 */
    return s >='A' && s <= 'Z' ? s + 'a' - 'A' : s;

}
