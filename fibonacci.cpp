
/*{
	int i,n,a=0,b=1,c;
	scanf("%d",&n);
	printf("\n%d\t%d",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\t%d",c);
	}
}*/


#include<stdio.h> 
void display (int age1,int age2) 
{ 
printf("age of first person is:%d",age1); 
printf("age of second person is:%d",age2); 
} 
int main() 
{ 
int agearray[ ]={ 10,20,30,40,50}; 
display (agearray [0],agearray [1]); 
return 0; 
} 
