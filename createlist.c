#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void main()
{
	struct node *head=NULL,*x;
	int n,i;
	printf("Enter the number of elements in a list : ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
	{
		x=(struct node *)malloc(sizeof(struct node *));
		scanf("%d",&x->data);
		if(head==NULL)
			x->link=NULL;
		else
			x->link=head;
		head=x;
	}
	printf("This is the current list :\n");
	x=head;
	while(x)
	{
		printf("%d\n",x->data);
		x=x->link;
	}
}
