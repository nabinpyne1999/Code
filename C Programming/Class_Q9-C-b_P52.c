#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("\nIt is Even number = %d", a);
    }
    else
    {
        printf("\nIt is Odd number = %d", a);
    }
    return 0;
}