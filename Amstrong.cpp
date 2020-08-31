#include<stdio.h>
int main()
{
	int n,i,sum=0,temp,remainder;
	printf("Enter a number :");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		remainder=n%10;
		sum=sum+(remainder*remainder*remainder);
		n=n/10;
	}
	if(sum==temp)
	printf("%d is a Amstrong number",temp);
	else
	printf("%d is not a Amstrong number",temp);
	
}
