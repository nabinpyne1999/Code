#include <stdio.h>
int main()
{
	int n, i;
	float s = 0, d = 1;
	printf("Enter the n th number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		s = s + (1.0 / i * d);
		d = 2;
		printf("%d ", i);
	}
	printf("\nSum is %5.2f ", s);

	return 0;
}
