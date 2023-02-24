#include<stdio.h>
int fib(int);
void main()
{
	int i,n;
	printf("enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("fib=%d\n",fib(i));
}
int fib(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}