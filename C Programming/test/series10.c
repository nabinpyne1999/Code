#include<stdio.h>
int main()
{
	int n,s=0,f=1,i;
	printf("Enter the n th number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
		s=s+f;
		printf("%d ",f);
	}
	printf("\nSum of the series = %d ",s);
	return 0;
	
}
