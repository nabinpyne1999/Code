#include <stdio.h>
int main()
{
	int b, c, d;
	float p, a, m, k = 0.0, j = 1.00;
	printf("Enter the n th number: ");
	scanf("%d", &b);
	printf("Enter the value of a: ");
	scanf("%f", &a);
	for (c = 1; c <= b; c++)
	{
		m = 1.00;
		for (d = 1; d <= c; d++)
		{
			m = a * m;
		}
		k = k + (j / m);
		m++;
		j++;
	}
	printf("\nSum of the n th number are %5.2f ", k);
	return 0;
}
