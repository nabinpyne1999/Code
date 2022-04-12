#include <stdio.h>
int main()
{
    int a, b, c, d, p, q, f = 0;
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
        q = (q - 1) * (-1);
        printf("%d ", q);
        f = (f + q);
    }
    printf("\nSum of series = %d", f);
    return 0;
}