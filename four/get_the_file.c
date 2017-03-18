#include <stdio.h>

int main(void)
{
    FILE * f = fopen("afile.txt", "r");
    char line[100];
    int n = 0;
    while (fgets(line, 100, f) != NULL)
    {
        printf("%d. %s", ++n, line);
    }
    fclose(f);
}
