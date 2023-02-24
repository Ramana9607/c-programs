#include<stdio.h>
int main()
{
	int r,c,i,j,a[10][10],trace=0;
	printf("enter r and c  value");
	scanf("%d%d",&r,&c);
	printf("enter array elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		trace+=a[i][i];
		
	}
	printf("%d",trace);
}