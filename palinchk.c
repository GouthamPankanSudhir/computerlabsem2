#include<stdio.h>
main()
{
	int n,s=0,a,r;
	printf("Enter the number : ");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		r=a%10;
		s=(s*10)+r;
		a=a/10;		
	}
	if(s==n)
		printf("The number %d is a paindrome. \n",n);
	else
		printf("The number %d is not a palindrome.\n",n);
}
