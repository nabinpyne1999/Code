#include <stdio.h>
int main()
{
  int n, i;
  float e, o, m = 5.00, d = 4.00, x = 1.0;
  printf("Enter the n th number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    if (i % 2 == 1)
    {
      m = i * m;
    }
    if (i % 2 == 0)
    {
      d = i * d;
    }
    printf("%5.2f/%5.2f ", d, m);
    printf("= %5.2f ", d / m);
    printf("\n");
    x = x + (d / m);
    d++;
    m++;
  }
  printf("\nSum of the n th number are %5.2f ", x);
  return 0;
}