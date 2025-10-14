// wap to insert element in an array
#include<stdio.h>
int main()
{
	int a[10],pos,value,n,i;
	printf("enter the size of array elements :");
	scanf("%d",&n);
	printf("\n enter the position where you want to insert");
	scanf("%d",&pos);
	printf("\n enter the array  elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter value you  want to insert:\n");
	scanf("%d",&value);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=value;
	printf("update array after insertion is:");
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}