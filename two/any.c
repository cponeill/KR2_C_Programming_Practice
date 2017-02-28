#include <stdio.h>

/* Write the function any(s1,s2) , which returns the first location 
   in the string s1 where any character from the string s2 occurs,
   or -1 if s1 contains no characters from s2 . */

int any(char s1[], char s2[])
{
    int i, j, pos;

    pos = -1;
    for (i = 0; pos == -1 && s1[i] != '\0'; i++)
        for (j = 0; pos == -1 && s2[j] != '\0'; j++)
            if (s2[j] == s1[i])
                pos = i;
    return pos;
}
