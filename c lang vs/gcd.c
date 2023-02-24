#include<stdio.h>
main()
{
	int m,n,l,g,i;
	printf("enter: ");
	scanf("%d%d",&m,&n);
	for(i=1;(i>=m)&&(i>=n);i++)
	{
		if((i%m==0)&&(i%n==0))
		{
			l=i;
			printf("LCM=%d",l);
			g=m*n/l;
			printf("GCD=%d",g);
		}
	}
}