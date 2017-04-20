#include <stdio.h>

#define STR_BUFFER 10000

void strcat(char *, char *);

int main(int argc, char *argv[])
{
        char string1[STR_BUFFER] = "What A ";
        char string2[STR_BUFFER] = "Wonderful World!";

        printf ("String 1: %s\n", string1);

        strcat(string1, string2);

        printf ("String 2: %s\n", string2);
        printf ("Cat Result: %s\n", string1);

        return 0;
}

/* Concatenate t to s. */
void strcat(char *s, char *t)
{
        /*
         * '*++s' is used to reference the pointer before incremmenting it so
         * that the check for falsehood ('\0') is done with the next character
         * instead of '*s++' which would check, then increment. Using '*s++'
         * would increment the pointer to the base string past the null
         * termination character. When outputting the string, this made it
         * appear that no concatenation occurred because the base string is
         * cut off by the null termination character ('\0') that was never
         * copied over.
         */
        while(*s++); /* Get to the end of the string */
        s--;           /*get back to the end of the string.*/
        while((*s++ = *t++));
}
