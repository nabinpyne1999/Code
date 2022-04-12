#include <stdio.h>
int main()
{
  float a, b, c;
  printf("Enter 3 sides of a triangle: ");
  scanf("%f%f%f", &a, &b, &c);
  if (a == b && b == c)
  {
    printf("The Given Triangle is Equilateral\n");
    // Equilateral: Is a triangle in which all 3 sides have the same length.//
  }
  else if (a == b || b == c || c == a)
  {
    printf("The Given Triangle is Isosceles\n");
    // Isosceles: Is a triangle that has 2 sides of equal length.//
  }
  else
  {
    printf("The Given Triangle is Scalene\n");
    // Scalene: Is a triangle having 3 unequal sides.//
  }
  return 0;
}
