#include <stdio.h>
int main()
{
    int a, b, c, d, p, q;
    printf("Enter the n th number: ");
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        c = 2;
        q = 1;
        for (p = 1; p <= b; p++)
        {
            q = c * q;
        }
        q = q - 1;
        printf("%d ", q);
    }
    return 0;
}