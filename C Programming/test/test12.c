#include <stdio.h>
int main()
{
	int b, c, d;
	float a, m, k = 0.00, j = 1.00,e=-1.0,o=1.0;
	printf("Enter the n th number: ");
	scanf("%d", &b);
	printf("Enter the value of a: ");
	scanf("%f", &a);
	for (c = 2; c <= b+1; c++)
	{
		m = 1.00;
		if (c % 2 == 1)
		{
			for (d = 1; d <= c; d++)
		   {
			m =e*(d * m);		
	       }
		}
		if (c % 2 == 0)
		{
			for (d = 1; d <= c; d++)
		{
			m =(d * m);
		}
	}
		printf("%5.2f/%5.2f ",a,m);
		printf("= %5.2f ",a/m);
		printf("\n");
		k = k + (a / m);
	//	m++;
	}	
	printf("\nSum of the n th number are %5.2f ", k);
	return 0;
}
