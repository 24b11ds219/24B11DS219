#include<stdio.h>
int display()
{
	auto int a=10;
	printf("value is :%d\n",a);
    ++a;	
}
int main()
{
	display();
	display();
	display();	
}