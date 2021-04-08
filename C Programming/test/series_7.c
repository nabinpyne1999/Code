#include<stdio.h>
int main()
{
	int a=3,b,c,d=1;
	printf("Enter the n th number: ");
	scanf("%d",&b);
	for(c=1;c<=b;c++)
	{
	
		a=a*d;
		d=2;
		printf("%d ",a);
	}
	return 0;
}
