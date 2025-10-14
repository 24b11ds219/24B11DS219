//WAP to array to pointer.
#include<stdio.h>
int main()
{
	int arr[50],i,n,*p;
	printf("Enter n value:");
	scanf("%d",&n);
	printf("Enter array elements");
 p=arr;
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
    } 
	for(i=0;i<n;i++)
	{
	    printf("\t%d",(p+i));
    }  
    	for(i=0;i<n;i++)
	{
	    printf("\n%d",*(p+i));
    }  
	return 0;
}