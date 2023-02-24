#include<stdio.h>
int main()
{
	int i,n,a[100];
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("even numbers are");
	for(i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			if(a[i]%2==0)
			{
				printf("%d\t",a[i]);
			}
		}
	}
	printf("odd numbers are");
	for(i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			if(a[i]%2==1)
			{
				printf("%d\t",a[i]);
			}
		}
	}
}