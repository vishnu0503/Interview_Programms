#include<stdio.h>
int main()
{
	int n,i,factorial=1;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
	factorial=factorial*i;
	}
	printf("Factorial of %d is %d",n,factorial);
	
}
