//auto,static,register and extern storiges
/*#include<stdio.h>
int display()
/*{
	auto int a=30;
	printf("value is :%d\n",a);
    ++a;	
}
int main()
{
	display();
	display();
	display();	
}

{
	static int a=10;
	printf("value is :%d\n",a);
    ++a;	
}
int main()
{
	display();
	display();
	display();	
}

{
	register int a=10;
	printf("value is :%d\n",a);
    ++a;	
}
int main()
{
	display();
	display();
	display();	
}*/
#include<stdio.h>
extern int a=10;
int display()
{
	printf("value is :%d\n",a);
    ++a;	
}
int main()
{
	display();
	display();
	display();	
}