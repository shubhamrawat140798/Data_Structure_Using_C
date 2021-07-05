#include<conio.h>
#include<stdio.h>
struct node{
	int data;
	struct node* next;
};
struct node* head= NULL;
struct node* tail= NULL;
struct node* temp;
void main(){
	int i=0;
	clrscr();
	printf("Author - Shubham Rawat\n\n");
	// Insertion at beginning
	while(i<5){
		struct node* newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data : ");
		scanf("%d",&newnode->data);
		if(head==NULL){
			head=newnode;
			tail=newnode;
			tail->next=NULL;
		}
		else{
			tail->next=newnode;
			tail=newnode;
			tail->next=NULL;
		}
		i++;
	}
	// display
	temp =head;
	do{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp->next!=NULL);
	printf("%d ",temp->data);// to print last element

	getch();

}
