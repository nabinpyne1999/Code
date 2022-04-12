#include <stdio.h>
int main()
{
  int n, i;
  float e = -1.0, o = 1.0, s = 0.00, d = 2.0, m = 3.0, x = 0.00;
  printf("Enter the n th number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    if (i % 2 == 1)
    {
      s = o * (d / m);
      d += 2;
      m = m + 2;
    }
    if (i % 2 == 0)
    {
      s = e * (d / m);
      d += 2;
      m = m + 2;
    }
    printf("%5.2f ", s);
    x = x + s;
  }
  printf("\nSum of the series = %5.2f ", x);
  return 0;
}
