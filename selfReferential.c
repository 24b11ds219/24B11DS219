#include<stdio.h>
struct student {
    int marks;
    int id;
    struct student *link;
};
int main()
{
    struct student s1;
    s1.marks=50;
    s1.id=168;
    s1.link=NULL;
    struct student s2;
    s2.marks=50;
    s2.id=168;
    s2.link=NULL;
    printf("marks is:%d",s1.link->marks);
    printf("id is %d",s1.link->id);
    return 0;
}