#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct node{
	int data;
	struct node* next;
	struct node* pre;
};
struct node* head = NULL;
struct node* tail = NULL;
struct node* temp = NULL;
void insertsorted();
void display();
void main(){
     int i;
     clrscr();
     printf("\nAuthor - Shubham Rawat");
     while(1){
	insertsorted();
     printf("\nDo you want to continue ? [No = 1]: ");
     scanf("%d",&i);
     if(i==1)
	break;
     }
     display();
     getch();
}
void insertsorted(){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data in node: ");
	scanf("%d",&newnode->data);
	if(head==NULL){
		head=newnode;
		tail=newnode;
		tail->next=NULL;
		newnode->next=NULL;
		newnode->pre=NULL;
	}
	if( newnode->data < head->data |newnode->data == head->data){
				newnode->next=head;
				head->pre=newnode;
				head=newnode;
				head->pre=NULL;
			      //	printf("head: %d",head->data);

	}
	else if(newnode->data > tail->data | newnode->data == tail->data){
				tail->next=newnode;
				newnode->pre=tail;
				tail=newnode;
				tail->next=NULL;
				printf("\ntail: %d",tail->data);
	}
	else{
		temp=head;
		while(temp!=NULL){
			printf("\n temp: %d",temp->data);

			 if(newnode->data < temp->next->data  &temp!=tail ){
			      newnode->next=temp->next;
			      newnode->pre=temp;
			      temp->next->pre=newnode;
			      temp->next=newnode;
			      break;
			}
			temp=temp->next;
		}
	}
}
void display(){
	temp=head;
	printf("\nLinked list:");
       while(temp!=NULL){
		printf("\n%d address: %u pre %u  next %u ",temp->data,temp,temp->pre,temp->next);
		temp=temp->next;
       }

}
