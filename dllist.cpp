#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node*prev;
	int data;
	struct node*next;
}*head=NULL;
void create_dll()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("\nenter data in node:");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		struct node *ptr;
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->prev=ptr;
	}
}
void display()
{
	struct node *ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("\n dll is empty");
	}
	else
	{
	printf("NULL");
	while(ptr!=NULL)
	{
		printf("%<-%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL");
    }
}
void first_insert()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("\nenter data:");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		temp->next=head;
		ptr->prev=temp;
		head=temp;
	}

}
void last_insert()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("\nenter data:");
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
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->prev=ptr;
	}
}
void anypos_insert()
{
	struct node *ptr,*temp,*ptr1;
	int pos,count=0;
	
	ptr=head;
	while(ptr->next!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	count++;
	printf("Enter position:");
	scanf("%d",&pos);
	if(pos<1||pos>count+1)
	{
		printf("\n Invalid pos");
	}
	else
	{
		ptr=head;
		if(pos==1)
		{
			first_insert();
		}
		else if(pos>1&&pos<=count)
		{
			int i;
			temp=(struct node*)malloc(sizeof(struct node));
			printf("Enter value:");
			scanf("\n%d",&temp->data);
			temp->next=temp->prev=NULL;
			for(int i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			temp->next=ptr->next;
			ptr1=ptr->next;
			ptr1->prev=temp;
			ptr->next=temp;
			temp->prev=ptr;
		}
		else
		{
			last_insert();
		}
	}
}
void first_deletion()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
    	printf("double linked list id empty");
	}
	else
	{
    head=ptr->next;
    free(ptr);
    head->prev=NULL;
    }
}
void last_deletion()
{
	struct node *ptr,*temp;
	ptr=head;
	if(head==NULL)
	{
		printf("DLL is empty");
	}
	else
    {
	
	while(ptr->next->next!=NULL)
	{
		ptr=ptr->next;
	}
	temp=ptr->next;
	free(temp);
	ptr->next=NULL;
    }
}
void anypos_deletion()
{
	int pos, count=0;
	struct node *ptr,*temp,*ptr1;
	ptr=head;
	while(ptr->next!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	count++;
	printf("enter pos");
	scanf("%d",&pos);
	if(head==NULL)
	{
		printf("invalid pos");
	}
	else
	{
	ptr=head;
		if(pos==1)
		{
			first_deletion();
		}
		else if(pos>1||pos<count)
		{
			int i;
			for(int i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr1=temp->next;
			ptr->next=temp->next;
			ptr1->prev=temp->prev;
			free(temp);
	    }
		else
		{
				last_deletion();
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n0.exit\n1.create\n2.display\n3.first_insert\n4.last_insert\n5.anypos_insert\n6.first_deletion\n7.last_deletion\n8.anypos_deletion\nenter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					create_dll();
					break;
				}
			case 2:
				{
					display();
					break;
				}
			case 0:
				{
					exit(0);
					break;
				}
			case 3:
				{
					first_insert();
					break;
				}
			case 4:
				{
					last_insert();
					break;
				}
			case 5:
				{
					anypos_insert();
					break;
				}
			case 6:
				{
					first_deletion();
					break;
				}
			case 7:
				{
					last_deletion();
					break;
				}
		   case 8:
				{
					anypos_deletion();
					break;
				}
	    }
	}
}
