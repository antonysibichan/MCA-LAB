#include<stdio.h>
void main()
	{
	int m,n,a[10],b[10],i,j,t,k=0;
	printf("enter the size of array a:";
	scanf("%d"&m);
	printf("enter array elements:");
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	printf("enter the size of array b:")
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	 for(j=i+1;j<m;j++)
	if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t
		}
	for(i=0;i<
			
	
	
