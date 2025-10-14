//WAP to find factorial of a number using recursion 
#include<stdio.h>
unsigned long long int factorial(int);//fun decl
int main()
{
	int n;
	printf("Enter value:");
	scanf("%d",&n);
	printf("factorial of %d : %u",n,factorial(n));
}
unsigned long long int factorial(int a)
{
	if(a<=1)
	{
		return 1;
	}
	else
	{
		return a*factorial(a-1);
	}
}
//WAP to 