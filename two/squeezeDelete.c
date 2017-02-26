#include <stdio.h>


/* This is the first version of the code. */
void squeeze(char s1[], char s2[])
{

    int i, j, k;
    int instr2 = 0;

    for (i = j = 0; s1[i] != '\0'; i++
    {
        instr2 = 0;
        for (k = 0; s2[k] != '\0' && !instr2; k++)
        {
            if (s2[k] == s1[i])
            {
                instr2 = 1;
            }
        }
        if (!instr2)
        {
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0';
}


/* This is the second version of the code. */
void squeezeTwo(char s1[], char s2[])
{

    int i, j, k;
    for (k = 0; s2[k] != '\0'; k++) {
        for (i = j = 0; s1[i] != '\0'; i++)
            if (s1[i] != s2[k])
                s1[j++] = s1[i];
    s[j] = '\0';
    }
}
