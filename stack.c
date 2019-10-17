#include<stdio.h>
#include<stdlib.h>
int top=-1,s[30],n;
void push()
{
	int x;
	if(top>=n)
		printf("The Stack is full!!");
	else
	{
		printf("Enter the element : ");
		scanf("%d",&x);
		top=top+1;
		s[top]=x;
	}
}
void pop()
{
	if(top<0)
		printf("The Stack is empty.\n");
	else
		top--;
}
void display()
{
	if(top<0)
		printf("The Stack is empty.\n");
	else
	{
		int i = top;
		printf("This is the stack\n");
		while(i!=-1)
		{
			printf("%d\n",s[i]);
			i--;
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
		printf("1. Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
				break;
			case 2: pop();
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
