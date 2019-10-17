#include<stdio.h>
int f=-1,r=-1,cq[30],n;
void cqinsert()
{
	int x;
	if((r+1)%n==f)
		printf("The Queue is full!!\n\n");
	else
	{
		printf("Enter the element : ");
		scanf("%d",&x);
		if(r==-1)
			f=r=0;
		else
			r=(r+1)%n;
		cq[r]=x;
	}
}
void cqdelete()
{
	if(f==-1)
		printf("The Queue is empty.\n\n");
	else if(f==r)
		f=r=-1;
	else
		f=(f+1)%n;
}
void cqdisplay()
{
	if(f==-1)
		printf("The Queue is empty.\n\n");
	else
	{
		int i = f;
		printf("\nThis is the queue :\n");
		while(i!=r)
		{
			printf("%d\n",cq[i]);
			i=(i+1)%n;
			if(i==r)
				printf("%d\n",cq[i]);			
		}
		if(i==r)
				printf("%d\n",cq[i]);
	}
}
void main()
{
	int ch;
	printf("Enter the limit : ");
	scanf("%d",&n);
	while(ch!=4)
	{	
		printf("\nSelect any of the choices given below :\n");
		printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: cqinsert();
				break;
			case 2: cqdelete();
				break;
			case 3: cqdisplay();
				break;
			case 4: printf("EXITING.........\n\n");
				break;
			default: printf("INVALID ENTRY.\nTRY AGAIN.\n\n");
				break;
		}		
	}
}

