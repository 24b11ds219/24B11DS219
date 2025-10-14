//WAP to check a string is palindrome or not using string handling methods
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[1000],s2[2000];
	printf("Enter the string :");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	if(!strcmp(s1,s2))//strcmp give 0 if same then 0!=1 "! is imp"
	    printf("string is palindrome");
	    else 
	    printf("string is not palindrome");
	    return 0;
}