#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 30
void main()
{
	char s[MAX];
	long int n=0,i;
	printf("enter string(sign first):");
	gets(s);
	for(i=1;s[i]!='\0';i++)
	n=n*10+s[i]-'o';
	if(s[0]=='-')
	n=-n;
	printf("long int of %s:%d\n",s,n);
	printf("using function atoi,answer=%d\n",atoi(s));
}