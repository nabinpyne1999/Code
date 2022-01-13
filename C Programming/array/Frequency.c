#include <string.h>
int main()
{
  int a, i, j, b = -1, c, x[100], y[100];
  printf("Enter the size of Array: ");
  scanf("%d", &a);
  for (i = 0; i < a; i++)
  {
    printf("Enter the value in position %d:", i + 1);
    scanf("%d", &x[i]);
  }
  for (i = 0; i < a; i++)
  {
    c = 1;
    for (j = i + 1; j < a; j++)
    {
      if (x[i] == x[j])
      {
        c++;
        y[i] = b;
      }
      if (y[i != b])
      {
        y[i] = c;
      }
    }
  }
}