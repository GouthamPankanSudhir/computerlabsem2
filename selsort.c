#include<stdio.h>
void main()
{
	int a[30],n,t,i,j;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("This is the array :\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	printf("This is the new array :\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
