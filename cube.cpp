//WAP TO FIND THE AREA AND PERIMITER OF A SQUARE
#include<stdio.h>
int main()
{
	int side,area,peri;
	printf("enter value=");
	scanf("%d",&side);
    area=side*side;
    peri=4*side;
    printf("\n area of square is %d: peri of square is:%d",area,peri);
    return 0;
}