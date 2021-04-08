#include<stdio.h>
int main()
{
	int a=1,b,c,d=1;
	printf("Enter the n th number: ");
	scanf("%d",&b);
	for(c=1;c<=b;c++)
	{
		a=(d*d)-1;
		d++;
		printf("%d ",a);
	}
	return 0;
}
