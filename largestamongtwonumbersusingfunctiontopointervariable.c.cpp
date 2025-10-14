//WAP to cheak largest among to two numbers using (function to pointer variable) return pointer variable in function .
#include<stdio.h>
int *largest(int*,int*);
int main()
{
	int a,b,*p,*q;
	printf("Enter two values :");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	int large=*largest(&a,&b);
	printf("largest is :%d",large);
	return 0;
}
int *largest(int*p,int*q)
{
	if(*p>*q)
	return p;
	else
	return q;
}
