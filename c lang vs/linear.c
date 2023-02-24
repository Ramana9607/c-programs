#include<stdio.h>
int main()
{
	int key,i,a[100],n,flag=0;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array values");
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("enter key value");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		  flag=1;
		  break;
	}
	if(flag=1)
	printf("element found at %d",i);	
	else
	printf("element not found");
}
}