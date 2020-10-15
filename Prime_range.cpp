#include<stdio.h>

void prime(int num1,int num2)
{
	int i,temp,j,count;
	for(i=num1;i<=num2;i++)
	{
		count=0,temp=0;
	for(j=2;j<=i/2;j++)
	{
		temp=i%j;
		if(temp==0)
		{
			count=1;
			break;
	    }
	}
	if(count==0)
	printf("%d ",i);
}

}

int main()
{
	int n1,n2;
	printf("Enter two numbers :");
	scanf("%d %d",&n1,&n2);
	prime(n1,n2);
}
