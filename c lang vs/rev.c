#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*ptr;
	printf("enter the no.of elements");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("enter elements");
	for(i=0;i<n;i++)
	scanf("%d",ptr+i);
	for(i=0;i<n;i++)
	printf("%d",*(ptr+i));
	printf("\n");
	ptr=realloc(ptr,2*n);
	printf("modified array");
	for(i=n;i<2*n;i++)
	scanf("%d",ptr+i);
	for(i=0;i<2*n;i++);
	{
	printf("%d",*(ptr+i));}
	free(ptr);
	return;
}