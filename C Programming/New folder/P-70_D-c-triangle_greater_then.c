#include <stdio.h>
int main()
{
  float a, b, c;
  printf("Enter 3 sides of a triangle: ");
  scanf("%f%f%f", &a, &b, &c);
  if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
  {
    printf("The triangle is valid\n");
  }
  else
  {
    printf("The triangle is not vaild\n");
  }
  return 0;
}