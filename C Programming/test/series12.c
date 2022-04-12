#include <stdio.h>
int main()
{
	int b, c, s, q = 1, d = 9, f = 0, o = 1, e = 0;
	printf("Enter the n th number: ");
	scanf("%d", &b);
	for (c = 1; c <= b; c++)
	{
		s = 0;
		if (c % 2 == 0)
		{
			q = (d * 10) + 9;
			d -= 1;
			e = e + q;
		}
		if (c % 2 == 1)
		{
			s = s + d;
			e = e + s;
		}
		//printf("%d + %d", q, s);
	}
	printf("\nSum of the series = %d ", e);
	return 0;
}
