//WAC program to find average of array elements using functions
#include<stdio.h>
float average(int,int[10]);
float average(int n,int a[10])
{
	int i,sum=0;
	float avg;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=(float)sum/n;
	return(avg);			
}
int main()
{
	int a[10],i,n;
	float avg;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[10]);
	}
	avg=average(n,a);
	printf("average is %.2f",avg);
	return 0;
}

