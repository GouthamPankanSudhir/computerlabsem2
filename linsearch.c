#include<stdio.h>
void main()
{
	int n,a[30],s,ch=0,i;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the search element : ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(s==a[i])
		{
			ch=1;
			break;			
		}
	}
	if(ch==0)
		printf("Search Element Not Found!\n");
	else
		printf("Search Element Found!\n");
}
