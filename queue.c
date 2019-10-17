#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1,q[30],n;
void insert()
{
	int x;
	if(r>=n-1)
		printf("The Queue is full!!\n");
	else
	{
		printf("Enter the element : ");
		scanf("%d",&x);
		if(r==-1)
			f=r=0;
		else
			r++;
		q[r]=x;
	}
}
void delete()
{
	if(f==-1)
		printf("The Queue is empty.\n");
	else if(f==r)
		f=r=-1;
	else
		f=f+1;
}
void display()
{
	if(f==-1)
		printf("The Queue is empty.\n");
	else
	{
		int i = f;
		printf("This is the queue\n");
		while(i<=r)
		{
			printf("%d\n",q[i]);
			i++;
		}
	}
}
void main()
{
	int ch;
	printf("Enter the limit : ");
	scanf("%d",&n);
	while(ch!=4)
	{	
		printf("Select any of the choices given below :\n");
		printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
				break;
			case 2: delete();
				break;
			case 3: display();
				break;
			case 4: printf("EXITING.........\n");
				break;
			default: printf("INVALID ENTRY.\nTRY AGAIN.\n");
				break;
		}		
	}
}
