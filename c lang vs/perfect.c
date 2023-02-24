#include<stdio.h>
int main()
{
	int rem,sum=0,i,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		rem=n%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("its a perfect number");
	}
	else
	printf("not a perfect number");
}