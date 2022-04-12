#include<stdio.h>
int main()
{
	int b,c;
	float a;
	printf("Enter the n th number: ");
	scanf("%d",&b);
	for(c=1;c<=b;c++)
	{
		a=1.0/c;
		printf("%5.2f ",a);
	}
	return 0;
}
