#include<stdio.h>
main()
{
	int m,n,l,g,i;
	printf("enter: ");
	scanf("%d%d",&m,&n);
	while(i<=m*n)
	{
        i=1;
		if((i%m==0)&&(i%n==0))
		{
			l=i;
			printf("LCM=%d",l);
			g=m*n/l;
			printf("GCD=%d",g);
		}
        i++;

	}
}