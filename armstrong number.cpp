#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,rem,sum=0,p=0;
	printf("enter the value:");
	scanf("%d",&n);
	temp=n;
p=(int)log10(n)+1;
    while(temp)
	{
		rem=temp%10;
		sum=sum+pow(rem,p);
		temp=temp/10;
	} 
	if(sum==n)
	{
		printf(" Armstrong number");
	}
	else
	{
		printf(" not a Armstrong number");
	}
	return 0;
}
