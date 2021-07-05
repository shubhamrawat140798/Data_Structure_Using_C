#include<conio.h>
#include<stdio.h>
void delete_begining();
void insertNodes();
void display();
struct node
{
	int data;
	struct node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
struct node* temp=NULL;
void main(){
	clrscr();
	printf("Author - Shubham Rawat");
	insertNodes();
	display();
	delete_begining();
	display();
	getch();
}
void insertNodes(){
	int a[5]={1,2,3,4,5},i;
	for(i=0;i<5;i++){
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=a[i];
		newnode->next=NULL;
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
	}
}
void display(){
	temp=head;
	printf("\n");
	while(temp->next!=NULL){
		printf("%d ->",temp->data);
		temp=temp->next;

	}
	printf("%d",temp->data);

}
void delete_begining(){
	temp=head;
	head=head->next;
	free(temp);
}
