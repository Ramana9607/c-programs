#include<stdio.h>
int main()
{
	int a[100],n,i,min=0,max=0;
	printf("enter a value");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
	     scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[min]>a[i])
		min=i;
		if(a[max]<a[i])
		max=i;
	}
	printf("min element is found at %d",min);
	printf("max element is fount at %d",max);
}