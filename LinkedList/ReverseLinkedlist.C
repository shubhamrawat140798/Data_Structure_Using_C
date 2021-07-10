//9. Reverse Linked List
#include<conio.h>
#include<stdio.h>
void insertNodes();
void display();
void rev();
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
struct node* temp=NULL;
void main(){
	clrscr();
	printf("Author - Shubham Rawat \n ");
	insertNodes();
	display();
	rev();
	display();
	getch();

}
void insertNodes(){
	int a[]={1,2,3,4,5},i=0;
	while(i<5){
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=a[i];
		newnode->next=NULL;
		i++;
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
void rev(){
	struct  node* temphead=NULL;
	struct node* temptail=NULL;
	struct node* temp2;
	temp= head;
	while(temp!=NULL){
		temp2=temp;
		temp=temp->next;
		if(temphead==NULL){
			temptail=temp2;
			temptail->next=NULL ;
			temphead=temp2;

		}
		else{

			temp2->next=temphead;
			temphead=temp2;

		}
	}
	head=temphead;
	tail=temptail;
}
