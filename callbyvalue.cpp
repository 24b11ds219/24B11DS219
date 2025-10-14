#include<stdio.h> 
void swap (int,int); 
int main() 
{ 
int a=100,b=200; 
printf("before swapping a=%d\n",a); 
printf("before swapping b=%d\n",b); 
swap(a,b); 
printf("After swapping a=%d\n",a); 
printf("After swapping b=%d\n",b); 
return 0; 
} 
void swap(int a,int b) 
{ 
int temp; 
temp=a; 
a=b; 
b=temp;
}