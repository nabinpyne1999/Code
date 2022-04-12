#include <stdio.h>
int main()
{
  float a, b;
  printf("Enter a number: ");
  scanf("%f", &a);
  //if the number is less then
  //zero, then multiply by (-1)
  if (a >= 0)
  {
    printf("\nThe absolute value = %5.2f", a);
  }
  else
  {
    b = a * (-1);
    printf("\nThe absolute value = %5.2f", b);
  }
  return 0;
}