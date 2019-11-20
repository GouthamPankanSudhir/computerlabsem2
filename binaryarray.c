#include<stdio.h>
void insert(int key, int parent, int tree[50]){
	if(tree[parent]==NULL)
		tree[parent]=key;	
	else if(key>tree[parent])
		insert(key,((parent*2)+2),tree);
	else if(key<tree[parent])
		insert(key,((parent*2)+1),tree);
}
void main(){
	char ch='n';
	int i,x,parent,tree[50];
	for(i=0;i<50;i++)
		tree[i]=NULL;
	printf("Enter the root element : ");
	scanf("%d",&x);
	tree[0]=x;
	do
	{
		printf("Enter an element : ");
		scanf("%d",&x);
		insert(x,0,tree);		
		printf("Do you want to insert another element : (y/n)");
		scanf("%c",&ch);	
	}while(ch!='n');	
	printf("This is the binary search tree : \n");
	for(int i=0;i<50;i++){
		if(tree[i]!=NULL)
			printf("%d-",tree[i]);
	}
}
