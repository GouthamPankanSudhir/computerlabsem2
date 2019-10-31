#include <stdio.h>
#include <string.h>
#include <ctype.h>
int n, s[50], currentloc = 0;
char postfix[50];
void evaluate()
{
	int val;
	for (int i = 0; i < n; i++)
	{
		if (isdigit(postfix[i]))
		{
			s[currentloc++] = postfix[i] - '0';
		}
		else
		{
			switch (postfix[i])
			{
			case '*':
				val = s[currentloc - 1] * s[currentloc - 2];
				s[--currentloc] = val;
				break;			
			case '/':
				val = s[currentloc - 1] / s[currentloc - 2];
				s[--currentloc++] = val;
				break;
			case '+':
				val = s[currentloc - 1] + s[currentloc - 2];
				s[--currentloc] = val;
				break;
			case '-':
				val = s[currentloc - 1] - s[currentloc - 2];
				s[--currentloc] = val;
				break;
			}
		}
	}
}
void display()
{
	for (int i = 0; i < currentloc; i++)
		printf("%d", s[i]);
}
void main()
{
	printf("Enter the string : ");
	gets(postfix);
	n = strlen(postfix);
	evaluate();
	display();
}
