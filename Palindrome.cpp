#include<stdio.h>
int main()
{
	int sum=0,n,remainder;
	printf("Enter a number :");
	scanf("%d",&n);
	int temp=n;
	while(n!=0)
	{
		remainder=n%10;
		sum=sum*10+remainder;
		n=n/10;
	}
	if(sum==temp)
	printf("%d is a palindrome number",temp);
	else
	printf("%d is not a palindrome number",temp);
}
