#include<stdio.h>
int main()
{
	int i,n,temp=0,count=0;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		temp=n%i;
		if(temp==0)
			count++;
	}
	if(count==0)
		printf("%d is a prime number",n);
	else
		printf("%d is not a prime number",n);
}
