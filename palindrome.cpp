// WAP to check number PALINDROME NUMBER OR NOT
#include<stdio.h>
int main()
{
    int n,rem,reverse=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;   //SAME NUMBER EVEN IF REVERSED
        reverse=reverse*10+rem;
        n=n/10; 
    }
    if(temp==reverse)
    {
        printf("%d is a palindrome",temp);
    }
    else
    {
       printf("%d is not a palindrome",temp);
    }
   
    return 0;
}
