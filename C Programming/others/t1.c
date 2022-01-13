#include <stdio.h>

int main()
{
  int num, num2, num3;
  printf("Enter 3 numbers: ");
  scanf("%d%d%d", &num, &num2, &num3);

  //printing result with OR (||) operator
  if (((num + num2) > num3) && ((num2 + num3) > num))
  {
    printf("true\n");
  }
  else
  {
    printf("false\n");
  }

  return 0;
}