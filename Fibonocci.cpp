#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("Enter n :");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	c=a+b;
	for(i=0;i<n-2;i++)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;	
	}
	
}
