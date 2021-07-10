//10. Insert a node so that data remains sorted
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct node{
	int data;
	struct node* next;
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
     printf("\nDo you want to continue ? [No = 0 ]: ");
     scanf("%d",&i);
     if(i==0)
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
	}
	if( newnode->data < head->data |newnode->data == head->data){
				newnode->next=head;
				head=newnode;
			      //	printf("head: %d",head->data);

	}
	else if(newnode->data > tail->data | newnode->data == tail->data){
				tail->next=newnode;
				tail=newnode;
				tail->next=NULL;
				printf("\ntail: %d",tail->data);
	}
	else{
		temp=head;
		while(temp!=NULL){
			printf("\n temp: %d",temp->data);

			else if(newnode->data < temp->next->data  &temp!=tail ){
			      newnode->next=temp->next;
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
		printf("%d ",temp->data);
		temp=temp->next;
       }
}
