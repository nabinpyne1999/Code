#include <stdio.h>
int main()
{
  int n, i, c;
  float m = 5.00, d = 1.00, s = 0.00;
  printf("Enter the n th number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {

    for (c = 1; c <= 4; c++)
    {
      d = d * c;
    }
    s = s + (d / m);
    //d += 2;
    m = m + 1;

    printf("%5.2f/%5.2f ", d, m);
    printf("= %5.2f ", d / m);
    printf("\n");
  }
  printf("\nSum of series %5.2f", s);
  return 0;
}