#include<stdio.h>
int main()
{
	int n,i;
	float s=0.00,d=1.0,m=2.0;
	printf("Enter the n th number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+(d/m);
		d+=2;
		m=m+3;
	}
	//	printf("%d ",i);
	
	printf("\nSum is %5.2f ",s);

return 0;
}
