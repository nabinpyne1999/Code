#include <stdio.h>
int main()
{
  int n, i, p = 0, q = 0;
  printf("Enter the n th number: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      p = p + i;
    }
    else
    {
      q = q + i;
    }
  }
  printf("\nSum of Even numbers ")
}
