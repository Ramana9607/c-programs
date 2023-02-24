#include<stdio.h>
main()
{
	int choice;
	printf("enter 1.triangle\n2.square\n3.rectangle\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				int h,b,c;
				printf("enter height,base=");
				scanf("%d%d",&h,&b);
				c=h*b*1/2;
				printf("area=%d",c);
				break;
			}
			default:{ printf("invalid choice");
				break;
			}
	}
}