#include<stdio.h>
int main()
{
	int c,b,e=1,o=-3,d=0,p=0;
	printf("Enter the n th number: ");
	scanf("%d",&b);
	for(c=1;c<=b;c++)
	{
		if(c%2==0)
		{
		o=o+p;
		p=-4;
		printf("%d ",o);	
		}
		if(c%2==1)
		{
			e=e+d;
			d=4;
			printf("%d ",e);
		}
		
	}
	return 0;
}
