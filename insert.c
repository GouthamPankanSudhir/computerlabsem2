#include<stdio.h>
void main()
{
	int a[30],n,i,ch,l;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be inserted : ");
	scanf("%d",&ch);
	printf("Enter the location : ");
	scanf("%d",&l);
	for(i=n;i>l;i--)
		a[i]=a[i-1];
	a[l]=ch;
	n++;
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
