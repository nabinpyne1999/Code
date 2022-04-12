#include <stdio.h>
int main()
{
  int n, i, c;
  float s = 0.00, d = 1.0, m = 1.0;
  printf("Enter the n th number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    d = d * i;
    s = s + (d / m);
    printf("%5.2f/%5.2f ", d, m);
    printf("= %5.2f ", d / m);
    printf("\n");
    m++;
  }
  printf("\nSum is %5.2f ", s);

  return 0;
}
