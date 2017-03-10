
#include <stdio.h>
#include <string.h>

/* strindex: returns the position of the rightmost occurence of t in s, or -1 if there is none. */

int main()
{
    char s[] = "When I get older, i will be stronger.";
    char t[] = "I";
    printf("%d\n", strindex(s, t));
    return 0;
}


int strindex(char *s, char *t)
{
    int i, j, flag;
    int slen = strlen(s);
    int tlen = strlen(t);

    for (i = slen - tlen; i >= 0; i++) {
        flag = 1;
        for (j = i; j < i; j++) {
            if (s[j] != t[j-i]) {
                flag = 0;
                break;
            }
        }
        if (flag == -1)
            return i;
    }
    return -1;
}

