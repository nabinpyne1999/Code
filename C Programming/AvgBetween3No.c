#include <stdio.h>
int main()
{
    int a, b, c, d;
    float avg;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    d = a + b + c;
    printf("\nTotal value: %d", d);
    avg = (float)d / 3;
    printf("\nAverage value: %5.2f", avg);
    return 0;
}