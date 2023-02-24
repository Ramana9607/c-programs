#include<stdio.h>
main()
{
	int i=1,n,count=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		while(i<=n)
		{
			if(n%i==0)
			{
				count++;
			}
			i++;
		}
	}
	if(count==2)
	printf("its a prime number ");
	else
	printf("not a prime number");
}