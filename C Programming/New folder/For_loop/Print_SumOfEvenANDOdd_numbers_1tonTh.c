#include <stdio.h>
int main()
{
  int n, i, p = 0, q = 0;
  printf("Enter the n th number: ");
  scanf("%d", &n);
  printf("\n");
  for (i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      printf("Even numbers: %d\n\n", i);
      p = p + i;
    }
  }
  printf("\n");
  for (i = 0; i < n; i++)
  {
    if (i % 2 == 1)
    {
      printf("Odd numbers: %d\n\n", i);
      q = q + i;
    }
  }
  printf("\nSum of Even numbers = %d", p);
  printf("\nSum of Odd numbers = %d", q);
  return 0;
}
