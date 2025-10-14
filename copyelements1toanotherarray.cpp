//WAP to copy elements of one array to another array
#include<stdio.h>
int main()
{
	int a[10],b[10],i,n;
	printf("enter size of array n");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("the copied array b elements is:");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t",b[i]);
	}
}