#include<stdio.h>
int main()
{
	int a=0,b=1,newnumber,i,n;
	printf("enter the size:\n");
	scanf("%d",&n);
	if (a==0)
	printf("0\n");
	if (b==1)
	printf("1\n");
	for(i=0;i<=n;i++)
	{
	newnumber=a+b;
	a=b;
	b=newnumber;
	printf("%d\n",newnumber);
	}
	return 0;
	}
