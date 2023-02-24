#include<stdio.h>
int main()
{
	int a[100],i,min=0,max=0,n;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[min]>a[i])
		min=i;
		if(a[max]<a[i]);
		max=i;
	}
	printf("min element is found at %d",min);
	printf("max element is found at %d",max);
}