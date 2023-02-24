#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],d[10][10],i,j,r,c;
	printf("enter rows and colums of the matrix");
	scanf("%d%d",&r,&c);
	printf("enter array elements for a matric");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter array elements for b matric");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("array elements are");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",d[i][j]);
		}printf("\n");
	}
}