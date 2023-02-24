#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
	printf("enter the values");
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	if(c1==r2)
	{
		printf("enter array elements");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter b matrix");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}c[i][j]=0;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<r2;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d",c[i][j]);
			}
		}printf("\n");
	}
}