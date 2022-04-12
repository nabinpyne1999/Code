#include <stdio.h>
int main()
{
  int i, a, rev, d, r[100];
  printf("Enter the size: ");
  scanf("%d", &a);
  for (i = 0; i < a; i++)
  {
    printf("Enter numbers: ");
    scanf("%d", &r[i]);
  }
  for (i = 0; i < a; i++)
  {
    rev = 0;
    while (r[i] != 0)
    {
      d = r[i] % 10;
      r[i] = r[i] / 10;
      rev = rev * 10 + d;
    }
    printf("%d\n", rev);
  }
  return 0;
}
