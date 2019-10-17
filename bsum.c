#include<stdio.h>
void main()
{
	int a[30][30],r,c,i,j,s=0;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("Enter the number of columns : ");
	scanf("%d",&c);
	printf("Enter the elements :\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	printf("This is the array :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if((i!=0)&&(j!=0)&&(i!=(r-1))&&(j!=(c-1)))
				s+=a[i][j];
		}
	}
	printf("SUM : %d\n",s);
}
