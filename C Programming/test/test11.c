#include <stdio.h>
int main()
{
	int b, c, d;
	float a, m, k = 0.00, j = 1.00,f;
	printf("Enter the n th number: ");
	scanf("%d", &b);
	printf("Enter the value of a: ");
	scanf("%f", &a);
	for (c = 1; c <= b; c++)
	{
		m = 1.00,f=1.00;
		for (d = 1; d <= c; d++)
		{
			m = d * m;
		}
		printf("%5.2f/%5.2f ",a,m);
		printf("= %5.2f ",a/m);
		printf("\n");
		k = k + (a / m);
		m++;
	}	
	printf("\nSum of the n th number are %5.2f ", k);
	return 0;
}
