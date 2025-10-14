#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	printf("enter the string:");
	gets(s);
	puts("your name is");
	puts(s);
	puts("string lower:");
	puts(strlwr(s));
	puts("sting upper:");
	puts(strupr(s));
	puts("reverse is");
	puts(strrev(s));
}