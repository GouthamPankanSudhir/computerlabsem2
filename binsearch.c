#include<stdio.h>
main()
{
	int a[30],n,s,i,f,m,l,ch=0,t,j;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be searched : ");	
	scanf("%d",&s);
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;	
			}
		}
	}
	printf("This is the sorted array : \n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	f=0;
	l=n-1;
	while(f<=l)
	{
		m=(f+l)/2;
		if(a[m]==s)
		{
			ch=1;
			break;
		}
		else 
		{	
			if(a[m]>s)
				l=m-1;
			else
				f=m+1;
		}
	}
	if(ch==0)
		printf("Element not found!\n");
	else
		printf("Element found.\n");
}
