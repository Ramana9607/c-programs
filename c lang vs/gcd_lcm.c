#include<stdio.h>
main()
{
	int a,b,gcd,lcm,r,m,n;
	printf("enter 2 numbers:\n");
	scanf("%d%d",&m,&n);
	if(m>n)
	{
		a=m;
		b=n;
	}
	else
	{
		a=n;
		b=m;
	}
	r=m%n;
	if(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	else
	{
		
	}
	
	gcd=b;lcm=(m*n)/gcd;
	printf("gcd of %d and %d=%d\n",m,n,gcd);
	printf("lcm of %d and %d=%d\n",m,n,lcm);
}