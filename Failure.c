#include<stdio.h>
#include<string.h>
#include<ctype.h>
char s[30],p[30],q[30];
int top=0,count=0;
void pop(){
	p[count]=s[top];
	count++;
	top--;
}
void push(char a){
	s[top]=a;
	top++;
}
void add(char a){
	p[count]=a;
	count++;
}
void delete(){
	top--;
}
int priority(char a){
	if(a=='+'||'-')
		return 1;
	else if(a=='/'||'*')
		return 2;
	else if(a=='^')
		return 3;
	else if(a=='(')
		return 0;
}
main()
{
	int i;
	printf("Enter the infix expression : ");
	scanf("%s",&q);
	for(i=0;q[i]!='\0';i++)
	{
		if(isalnum(q[i]))
			add(q[i]);
		else if(q[i]=='(')
			push(q[i]);
		else if(q[i]==')')
		{
			while(priority(s[top])!=0){
				pop();
			}	
			delete();
		}
		else
		{
			while(priority(s[top])>=priority(q[i])){
				pop();
			}
			push(q[i]);
		}
	}
	printf("This is the postfix expression : ");
	for(i=0;p[i]!='\0';i++)
		printf("%c",p[i]);
}
