// WAP to find largest element in arrey
 #include<stdio.h>
 int main()
 {
 	/*int n,i,largest;
 	printf("enter n value size");
 	scanf("%d",&n);
 	int a[n];
 	printf("\n enter the array value:");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	}
	largest=a[0];
	for(i=0;i<n;i++)
	{
		if(largest<a[i])
		largest =a[i];
	}
	printf("\n largest element is %d ",largest);
	return 0;*/
	int n,i,largest;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	int a[n];	printf("\n enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=a[0];
	for(i=0;i<n;i++)
	{
	if(largest<a[i])
	largest=a[i];
	}
	printf("\n largest element is:%d",largest);
	return 0;
	}
