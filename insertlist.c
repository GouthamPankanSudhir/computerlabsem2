#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*head=NULL,*first=NULL;
void insertbeg()
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node *));
	printf("Enter the data : ");
	scanf("%d",&ptr->data);
	ptr->link=head;
	head=ptr;	
}
void insertend()
{
	struct node *x;
	x=(struct node *)malloc(sizeof(struct node *));
	printf("Enter the data : ");
	scanf("%d",&x->data);
	first->link=x;
	x->link=NULL;
	first=x;
}
void insertafterkey()
{
	struct node *ptr,*x;
	int key;
	x=(struct node *)malloc(sizeof(struct node *));
	printf("Enter the data : ");
	scanf("%d",&x->data);
	ptr=head;
	printf("Enter the value after which the value has to be inserted : ");
	scanf("%d",&key);
	while((ptr)&&(ptr->data!=key))
		ptr=ptr->link;
	x->link=ptr->link;
	ptr->link=x;	
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
		printf("1. Enter the data at the beginning of the list :\n");
		printf("2. Enter the data at the end of the list :\n");
		printf("3. Enter the data after a specific value :\n");
		printf("4. Print the list.\n");
		printf("5. Exit.\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insertbeg();
				break;
			case 2: insertend();
				break;
			case 3: insertafterkey();
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
