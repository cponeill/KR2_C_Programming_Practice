/* removeChar: remove character s using integer c */

int removeChar(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] <= '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}
