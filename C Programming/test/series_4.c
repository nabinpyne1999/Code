#include <stdio.h>
int main()
{
    int a = -1, b, c, d = 0;
    printf("Enter the n th number: ");
    scanf("%d", &b);
    for (c = 1; c <= b; c++)
    {
        a = a + d;
        d = d-2;
        printf("%d " , a);
    }
    return 0;
}
