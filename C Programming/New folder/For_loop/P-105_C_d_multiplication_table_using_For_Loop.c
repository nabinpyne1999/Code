#include <stdio.h>
int main()
{
  int n, i, p = 1;
<<<<<<< HEAD
  printf("Enter ")
=======
  printf("Enter multiplication number: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; i++)
  {
    p = n * i;
    printf("%d + %d = %d\n", n, i, p);
  }
  return 0;
>>>>>>> 4900595425f0fe517e636a55691885ccb2864d61
}