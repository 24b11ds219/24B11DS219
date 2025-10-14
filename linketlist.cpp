#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;

}*head=NULL;
void createlinkedlist()
{
  struct node *temp,*ptr;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->next=NULL;
  printf("\n enter data value in node:");
  scanf("%d",&temp->data);
  if(head==NULL)
  {
    head=temp;
  }
  else
{
  ptr=head;
  while(ptr->next!=NULL)
  {
   ptr=ptr-> next;
  }
  ptr->next=temp;
}
}
void displaylinkedlist()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("\n linkedlist is empty");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("NULL");
		
	}
}
void first_insert()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf(" \n enter data in first node");
	scanf("%d",&temp->data);
	temp->next=head;
	head=temp;
	printf("\n insert at first successful");
}
void last_insert()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;

    printf("\nEnter data in last node: ");
    scanf("%d", &temp->data);

    if (head == NULL) {
        head = temp;
    } else {
        ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }

    printf("\nAdded node at last successfully\n");

}
void first_deletion()
{
	struct node *ptr;
	ptr=head;
	head=ptr->next;
	free(ptr);
	printf("deleted first node successfull");
}
void last_deletion()
{
	struct node *temp,*ptr;
	ptr=head;
	while(ptr->next->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=NULL;
	free(temp);
	printf("last node deleted successfully");
}
void anypos_insert()
{
	int pos,count=0;
	struct node *temp,*ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter the data");
	scanf("%d",&temp->data);
	printf("enter the pos");
	scanf("%d",&pos);
	if(pos<1||pos>count+1)
	{
		printf("invalid position");
	}
	else 
	{
		ptr=head;
		if(pos==1)
		{
			temp->next=head;
			head=temp;
		}
		else
		{
			ptr=head;
			int i;
			for(i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			temp->next=ptr->next;
			ptr->next=temp;
		}
	}
	}
	void anypos_deletion()
	{
		
	}
void sumof_sllelements()
{
	int sum=0;
	struct node *ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("\n SLL is empty");
	}
	else
	{
		while(ptr!=NULL)
		{
			sum=sum+ptr->data;
			ptr=ptr->next;
		}
	}
}
void alternate_no()
{
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		if(ptr->next==NULL)
		{
			ptr=ptr->next;
		}
		else
		{
			ptr=ptr->next->next;
		}
	}
}
int main()
{
  int ch;
  while(1)
  {
    printf("\n1.createlinkedlist \n2.display \n3.first_insert \n4.last_insert \n5.first_deletion \n6.last_deletion \n7.anypos_insert \n8.anypos_deletion \n9.sumof_sllelements \n10.alternate_no \n11.exit \n enter your choice ");
    scanf("%d",&ch);
    if(ch==1)
    createlinkedlist();
    else if (ch==2)
    displaylinkedlist();
    else if (ch==3)
    first_insert();
    else if (ch==4)
    last_insert();
    else if (ch==5)
    first_deletion();
    else if (ch==6)
    last_deletion();
    else if(ch==7)
    anypos_insert;
    else if(ch==8)
    anypos_deletion;
    else if(ch==9)
    sumof_sllelements;
    else if (ch==10)
    alternate_no;
    else if (ch==11)
    break;
    else
    printf("*wrong choice is entered");
  }
}