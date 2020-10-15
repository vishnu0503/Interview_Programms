#include<stdio.h>
	int main()
	{
		int n,odd=0,even=0,i;
		scanf("%d",&n);
		for(i=2;i<n;i++)
		{
			if(i%2==0)
			{
				odd=odd+6;
				//printf("%d ",odd);
			}
			else
			{
				even=even+7;
				//printf("%d ",even);
			}
		}
		if(n%2==0)
			printf("%d ",even);
		else
			printf("%d ",odd);
		
	}

