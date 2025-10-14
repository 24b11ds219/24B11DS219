//WAP to implement bubble sort algorithm
//wap to impliment bubble sort algorithm
/*#include<stdio.h>
int main()
{
	int a[10],n,i,temp,j;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//bubble sort
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<n-i;j++)   //used to 1 element in each pass
		{
			if(a[j]>a[j+1])   
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	printf("after sorting :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}*/
#include <stdio.h> 
#include <math.h> 
int main() 
{ 
double num, root; 
// Input 
printf("Enter an integer: "); 
scanf("%lf", &num); 
root = sqrt(num); 
printf("The Square Root of %.2lf is %.2lf.", num, root); 
return 0; 
}