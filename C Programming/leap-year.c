#include <stdio.h>
int main()
{
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);
  // leap year if not divisible by 100
  // but divisible by 4
  if (year % 4 == 0)
  {
    // not a leap year if divisible by 100
    // but not divisible by 400
    if (year % 100 == 0)
    {
      // leap year if perfectly divisible by 400
      if (year % 400 == 0)
      {
        printf("%d is a leap year.\n", year);
      }
      else
      // all other years are not leap years
      {
        printf("%d is not a leap year.\n", year);
      }
    }
    else
    {
      printf("%d is a leap year.\n", year);
    }
  }
  else
  // all other years are not leap years
  {
    printf("%d is not a leap year.\n", year);
  }
  return 0;
}