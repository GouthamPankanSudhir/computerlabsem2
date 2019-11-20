#include<stdio.h>
void insert(int key, int parent, int tree[50]){
	if(tree[parent]=='\0')
		tree[parent]=key;	
	else if(key>tree[parent])
		insert(key,((parent*2)+2),tree);
	else if(key<tree[parent])
		insert(key,((parent*2)+1),tree);
}
void main(){
	char ch='y';
	int x,parent,tree[50];
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
		if(tree[i]!='\0')
			printf("%d-",tree[i]);
	}
}
