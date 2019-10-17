#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void main()
{
	int n,m;
	struct node *top1=NULL,*top2=NULL,*top,*first1,*x;
	printf("Enter the limit of the first list : ");
	scanf("%d",&n);
	printf("Enter the elements of the first list : \n");
	for(int i=0;i<n;i++)
	{
		x=(struct node *)malloc(sizeof(struct node *));
		printf("Enter data : ");
		scanf("%d",&x->data);
		if(top1==NULL)
		{
			x->link=NULL;
			first1=x;
		}
		else
			x->link=top1;
		top1=x;
	}	
	printf("Enter the limit of the second list : ");
	scanf("%d",&m);
	printf("Enter the elements of the second list : \n");
	for(int i=0;i<m;i++)
	{
		x=(struct node *)malloc(sizeof(struct node *));
		printf("Enter data : ");
		scanf("%d",&x->data);
		if(top2==NULL)
			x->link=NULL;
		else
			x->link=top2;
		top2=x;
	}
	printf("This is the first list : \n");
	for(x=top1;x!=NULL;x=x->link)
		printf("%d\n",x->data);
	printf("This is the second list : \n");
	for(x=top2;x!=NULL;x=x->link)
		printf("%d\n",x->data);
	printf("This is the resultant list :\n");
	x=first1;
	x->link=top2;
	top=top1;
	for(x=top;x!=NULL;x=x->link)
		printf("%d\n",x->data);
}
