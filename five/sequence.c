/* This is an artificial sequence mean to show how to declare a pointer. */

int x = 1, y = 2, z[10];
int *ip;        /* ip is a pointer to int */
ip = &x;        /* ip no points to x */
y = *ip;        /* y is now 1 */
*ip = 0;        /* x is now 0 */
ip = &z[10];    /* ip now points to z[0] */

int main(void)
{
    int x = 1, y = 2, z[10];
    int *ip;
    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z[10];
    printf("%d\n%d\n%d\n", ip, y, *ip);
}
