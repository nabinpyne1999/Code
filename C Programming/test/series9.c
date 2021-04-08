#include<stdio.h>
int main()
{
	int a,s=0,i;
	printf("Enter the n th number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		s=(s*10)+1;
		printf("%d ",s);
	}
	return 0;
}
