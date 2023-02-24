#include<stdio.h>
int main()
{
	int n,i,n1=0,n2=1,n3;
	printf("enter a number");
	scanf("%d",&n);
	printf("%d\t%d\t",n1,n2);
	for(i=2;i<n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d\t",n3);
	}
}