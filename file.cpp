#include<stdio.h>
int main()
{
	FILE *p;
	p=fopen("balaji.cpp","w");
	fprintf(p,"hello files you r last ");
	fputs("\n virat kohli is a good batsman",p);
    fclose(p);	
	return 0;
}