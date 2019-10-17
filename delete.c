#include<stdio.h>
void main()
{
	int a[30],n,i,l,ch,dup=0;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be deleted : ");
	scanf("%d",&ch);
	for(i=0;i<n;i++)
		if(a[i]==ch)
			dup++;
	while(dup!=0)
	{
		for(i=0;i<n;i++)
			if(a[i]==ch)
				l=i;	
		for(i=l;i<n;i++)
			a[i]=a[i+1];
		n--;
		dup--;
	}		
	printf("This is the new array :\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
