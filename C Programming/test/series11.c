#include<stdio.h>
int main()
{
	int n,i,e=-1,o=1,s=0,d=2,x=0;
	printf("Enter the n th number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
		s=o*d;
		d+=2;
	    }
	    if(i%2==0)
	    {
	    	s=e*d;
	    	d+=2;
		}
		printf("%d ",s);
		x=x+s;
	}
	printf("\nSum of the series = %d ",x);
	return 0;
}
