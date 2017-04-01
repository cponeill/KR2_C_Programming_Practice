#include <stdio.h>

void strcpy(char *s, char *t)
{
    while(*s++ = *t++);
}

void strcat(char *s, char *t)
{
    while(*s)
    {
        ++s;
    }
    strcpy(s, t);
}

int main(void)
{
    char testbuff[128];

    char *test[] = 
    {
      "",
      "1",
      "12",
      "123",
      "1234"
    };

    size_t numtests = sizeof test / sizeof test[0];
    size_t thistest;
    size_t inner;

    /* Add the rest of the code here. */
}

