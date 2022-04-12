#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a % 10;
    c = a / 10;
    d = c % 10;
    e = c / 10;
    f = e % 10;
    g = e / 10;
    h = g % 10;
    i = g / 10;
    j = b + d + f + h + i;
    printf("\nTotal number = %d", j);
    return 0;
}