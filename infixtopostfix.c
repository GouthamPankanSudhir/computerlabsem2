#include<stdio.h>
#include<string.h>
int s[30],p[30];
int n,top=-1,count=0;
void pop(){
	p[++count]=s[top--];
}
char push(char a){
	s[++top]=a;
}
char add(char a){
	p[count++]=a;
}
int priority(char a){
	if(a=='+'||'-')
		return 1;
	else if(a=='/'||'*')
		return 2;
	else if(a=='^')
		return 3;
}
void evaluate(char a){
	in
}
void main()
{
	int len,countpost;
	char q[30];
	printf("Enter the infix expression : ");
	scanf("%s",&q);
	len=strlen(q);
	q[l]=')';
	s[0]='(';
	for(int i=0;i<len;i++);
	{
		if(!isalnum(q[i]))
			evaluate(q[i]);
	
	}
}
