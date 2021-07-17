#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;
void insert(int);
void printPreorder(struct node* );
void main(){
	int ch, item;
	clrscr();
	do{
		printf("\nEnter the item which you want to insert?\n");
		scanf("%d",&item);
		insert(item);
		printf("\nPress 0 to insert more?\n");
		scanf("%d",&ch);

	}while(ch==0);
	printPreorder(root);
	getch();

}
void printPreorder(struct node* node ){
	if(node==NULL)
		return;
	printf("%d ",node->data);
	printPreorder(node->left );
	printPreorder(node->right );
}
void insert(int item){
	struct node *ptr, *parentptr,*nodeptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=item;
	ptr->left=NULL;
	ptr->right=NULL;
	if(root==NULL){
		root=ptr;
		root->left=NULL;
		root->right=NULL;
	}
	else{
		nodeptr=root;
		while(nodeptr!=NULL){
			parentptr=nodeptr;
			if(ptr->data < nodeptr->data)
				nodeptr=nodeptr->left;
			else
				nodeptr=nodeptr->right;
		}
		if(ptr->data<parentptr->data)
			parentptr->left=ptr;
		else
			parentptr->right=ptr;
	}

	printf("Node inserted");
}
