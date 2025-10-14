//free()in dynamic memory allocatoin.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,m;
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
		printf("enter updated value:");
		scanf("%d",&m);
		p=(int*)realloc(p,m*sizeof(int));
		printf("\nEnter array elements:");
		for(i=0;i<m;i++)
		{
			scanf("%d",(p+i));
		}
		printf("\narray elements are:");
		for(i=0;i<m;i++)
		{
		    printf("\n%d",*(p+i));
		}
		free(p);
	}
}