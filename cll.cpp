#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
} *head=NULL;
void create_cll()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the node:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	
	}
	else
	{
		ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		ptr->next=NULL;
		ptr->next=temp;
		temp->next=head;
		
		
	}
	
}
void display_cll()
{
	if(head==NULL)
	{
		printf("\ncircular linked list is empty");
	}
	else
	{
		struct node *ptr;
		ptr=head;
		while(ptr->next!=head)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
			
		}
		printf("%d->head",ptr->data);
		
	}
}
int count_cll()
{
	struct node *ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("\ncll is empty:");
	}
	else
	{
		int c=0;
		while(ptr->next!=head)
		{
			c++;
			ptr=ptr->next;
		}
		c++;
		return c;
	}
	

}
void last_insert_cll()
{
	create_cll();
}
void first_insert_cll()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the node:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	
	}
	else
	{
		temp->next=head;
		ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		head=temp;
}
}
void anypos_cll()
{
	struct node *temp,*ptr;
	ptr=head;
	int pos,c=count_cll();
	printf("\nenter pos:");
	scanf("%d",&pos);
	if(pos<1||pos>c+1)
	{
		printf("\n invalid");
	}
	else
	{
		if(pos==1)
		{
			first_insert_cll();
		}
		else if(pos>1&&pos<c)
		{
			temp=(struct node*)malloc(sizeof(struct node));
			printf("\nenter the node:");
			scanf("%d",&temp->data);
			temp->next=NULL;
			for(int i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
				
			}
			temp->next=ptr->next;
			ptr->next=temp;
		
			
			
		}
			else
			{
				last_insert_cll();
			}
	}
}
void first_delete_cll()
{
	struct node *temp,*ptr;
	if(head==NULL)
	{
		printf("\ncll is empty");
	}
	else if(count_cll()==1)
	{
		head=NULL;
	}
	else
	{
		temp=head;
    	ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		head=temp->next;
		ptr->next=head;
		printf("%d->",temp->data);
		printf("\nfirst node is deleted ",temp->data);
		free(temp);	
	}
}
void last_delete_cll()
{
	struct node *temp,*ptr;
	if(head==NULL)
	{
		printf("\ncll is empty");
	}
	else
	{
	    if(count_cll()==1)
	{
		head=NULL;
	}
	else
    {
		ptr=head;
		while(ptr->next->next!=head)
		{
			ptr=ptr->next;
		}
		temp=ptr->next;
		ptr->next=head;
		printf("->%d",temp->data);
	    printf("\n'last node is deleted'");	
		free(temp);
    }
    }
}
void anypos_delete_cll()
{
	struct node*temp,*ptr;
	int pos,c;
	printf("enter position:");
	c=count_cll();
	if(pos<1|| pos>c)
	{
		printf("invalid position");
	}
	else
	{
		if(pos==1)
		{
			first_delete_cll();
		}
		else if(pos>1 && pos<c)
		{
			int i;
			ptr=head;
			for(i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr->next=temp->next;
			printf("%d-> is deleted",temp->data);
			printf("'Node is deleted",temp->data);
			free(temp);
		}
	}
}
int search()
{	
    struct node *ptr;
    ptr=head;
    int key;
    printf("enter key:");
    scanf("%d",&key);
    do
    {
    	if(ptr->data==key)
    	{
    		printf("element is found");
    		return 0;
		}
		else
		{
			ptr=ptr->next;
		}
		
	}
		while(ptr!=head);
		printf("key not found"); 
}
int main()
{
	int ch;
	while(1)
	{
	printf("\n0.exit\n1.create_cll\n2.display_cll\n3.count_cll\n4.last_insert_cll\n5.first_insert_cll\n6.anypos_cll\n7.first_delete_cll\n8.last_delete_cll\n9.anypos_delete_cll\n10.search\nenter your choice:");
	scanf("%d",&ch);
 	switch(ch)
	{
	        	case 1:
			    {
				    create_cll();
				    break;
			    }
		    	case 2:
				{
					display_cll();
					break;
				}
				case 3:
				{
					count_cll();
					break;
				}
				case 4:
				{
					last_insert_cll();
					break;
				}
				case 5:
				{
					first_insert_cll();
					break;
				}
				case 6:
				{
					anypos_cll();
					break;
				}
				case 7:
				    {
					    first_delete_cll();
					    break;
				    }
				case 8:
				    {
					    last_delete_cll();
					    break;
				    }
				case 9:
				    {
				    	anypos_delete_cll();
				    	break;
					}
				case 10:
				    {
				    	search();
				    	break;
					}       
				case 0:
					{
						exit(0);
						break;
					}
					default:
						{
							printf("wrong choice");
							break;
						}
	}
}
}