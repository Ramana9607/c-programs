#include<stdio.h>
main()
{
	int r,sum,n,lucky;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter a lucky number");
	scanf("%d",&lucky);
	do
	{
		sum=0;
		while(n!=0)
		{
			r=n%10;
			sum=r+sum;
			n=n/10;
		}
		n=sum;
	}while(n>=10);
	if(lucky==sum)
	printf("lucky number");
	else
	printf("not lucky number");
}