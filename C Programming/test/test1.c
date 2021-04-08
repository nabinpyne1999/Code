#include<stdio.h>
int main()
{
	int n,i,d=1,s=3;
	printf("Enter the n th number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			s=s*d;
			d=2;
			printf("%d ",s);
	}
	return 0;
}
