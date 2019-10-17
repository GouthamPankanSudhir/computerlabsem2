#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void main()
{
	int n,i;
	struct node *x,*top=NULL;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
	{
		x=(struct node *)malloc(sizeof(struct node *));
		printf("Enter data : ");
		scanf("%d",&x->data);
		if(top==NULL)
			x->link=NULL;
		else
			x->link=top;
		top=x;
	}
	printf("This is the list :\n");
	for(x=top;x!=NULL;x=x->link)
		printf("%d\n",x->data);
}
