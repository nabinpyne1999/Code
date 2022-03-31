#include <stdio.h>
int main()
{
  int i, n;
  printf("Enter the n th number: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      printf("Even numbers: %d\n", i);
  }
  return 0;
}