#include<stdio.h>
#include<stdlib.h>
#include<malloc.h> 
struct bst{
	int data;
	struct bst *lchild, *rchild;
};
struct bst *createbranch(int value){
	struct bst *temp = (struct bst*)malloc(sizeof(struct bst));
	temp->data = value;
	temp->rchild = NULL;
	temp->lchild = NULL;
	return temp;
}
struct bst *insert(struct bst *temp, int value){
	if(temp==NULL)
		return createbranch(value);
	if(value<temp->data)
		temp->lchild = insert(temp->lchild,value);
	else
		temp->rchild = insert(temp->rchild,value);
	return temp;
}
struct bst *search(struct bst *temp, int value){
	if((temp->data==value)||(temp==NULL))
		return temp;
	if(value<temp->data)
		return search(temp->lchild,temp->data);
	else if(value>temp->data)
		return search(temp->rchild,temp->data);
}
void inorder(struct bst *temp){
	if(temp!=NULL){
	inorder(temp->lchild);
	printf("%d ->\n",temp->data);
	inorder(temp->rchild);
	}
}
void main()
{
	int data,ch;
	struct bst *branch = NULL, *search_element;
	printf("Enter the base element : ");
	scanf("%d",&data);
	branch = insert(branch,data);
	do
	{
		printf("Select any of the choices below : \n");
		printf("1. Insert element.\n");
		printf("2. Search element.\n");
		printf("3. Display.\n");
		printf("4. Exit.\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the value to be inserted : ");
				scanf("%d",&data);
				insert(branch,data);
				break;
			case 2: printf("Enter the value to be searched : ");
				scanf("%d",&data);
				search_element=search(branch,data);
				if(search_element->data==data)
					printf("Element Found.\n");
				else if(search_element==NULL)
					printf("Element Not Found.\n");
				break;
			case 3: inorder(branch);
				break;
			case 4: printf("EXITING.......\n");
				break; 
			default : printf("INVALID ENRTY.\nTRY AGAIN.\n");
				break;
		}
	}while(ch!=4);
}
