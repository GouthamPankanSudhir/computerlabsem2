#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*head=NULL,*first=NULL;
void deletebeg()
{
	head=head->link;
}
void printlist()
{
	struct node *x;
	printf("This is the list :\n");
	x=head;
	while(x)
	{
		printf("%d\n",x->data);
		x=x->link;
	}
}
void deleteend()
{
	struct node *x;
	x=head;
	while(x->link!=first)
		x=x->link;
	x->link=NULL;
	first=x;
}
void deletekey()
{
	struct node *prev,*current;
	int key;
	printf("Enter the key : ");
	scanf("%d",&key);
	prev=current=head;
	while((current->link!=NULL)&&(current->data!=key))
	{	
		prev=current;
		current=current->link;
	}
	prev->link=current->link;	
}
void main()
{
	struct node *x;
	int n,i,ch;
	printf("Enter the number of elemnts : ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
	{
		x=(struct node *)malloc(sizeof(struct node *));
		scanf("%d",&x->data);
		if(head==NULL)
		{
			x->link=NULL;
			first=x;
		}
		else
			x->link=head;
		head=x;
	}
	while(ch!=5)
	{
		printf("Select any of the choices given below :\n");
		printf("1. Delete the data at the beginning of the list :\n");
		printf("2. Delete the data at the end of the list :\n");
		printf("3. Delete the data with a specific value :\n");
		printf("4. Print the list.\n");
		printf("5. Exit.\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: deletebeg();
				break;
			case 2: deleteend();
				break;
			case 3: deletekey();
				break;
			case 4: printlist();
				break;
			case 5: printf("EXITING.......\n");
				break;
			default:printf("INVALID ENTRY. TRY AGAIN\n");
				break;	
		} 
	}
}
