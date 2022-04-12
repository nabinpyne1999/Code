#include <stdio.h>
int main()
{
    int a = -1, b, c, d = 0, p;
    printf("Enter the n th numbers: ");
    scanf("%d", &b);
    for (c = 1; c <= b; c++)
    {
        p = a - d;
        d = -2;
        printf("%d", p);
    }
    return 0;
}