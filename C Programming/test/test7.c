#include <stdio.h>
int main()
{
	int n, i;
	float e = -1.0, o = 1.0, s = 0.0, d = 2.0, x = 0.0;
	printf("Enter the n th number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			s = o * (1.0 / d);
			d += 2;
		}
		if (i % 2 == 0)
		{
			s = e * (1.0 / d);
			d += 2;
		}
		printf("%5.2f ", s);
		x = x + s;
	}
	printf("\nSum of the series = %5.2f ", x);
	return 0;
}
