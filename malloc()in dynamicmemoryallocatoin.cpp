//malloc()in dynamic memory allocatoin.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n;
	printf("enter no of elements:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory allocation is not possible");
		exit(0);
	}
	else
	{
		printf("\nEnter array elements:");
		for(i=0;i<n;i++)
		{
			scanf("%d",(p+i));
		}
		printf("\narray elements are:");
		for(i=0;i<n;i++)
		{
		    printf("\n%d",*(p+i));
		}
	}}