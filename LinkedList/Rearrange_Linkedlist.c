#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *temp=NULL;
void sample(){
	int a[]={1,2,3,4,5,6,7,8};
	int i=0;
	while(i<8){
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=a[i];
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
	while(temp->next!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
void rearange(){
	struct node *fast;
	struct node *middle;
	struct node *head2=NULL;
	struct node *temp2;
	struct node *curr;
	struct node *ne;
	temp=head;
	fast=head;
	while(fast!=NULL & fast->next!=NULL){
		temp=temp->next;
		fast=fast->next->next;
	}
	printf("\nmiddle: %d",temp->data);
	middle=temp;
	//reverse
	while(temp){
		temp2=temp;
		temp=temp->next;
		if(head2==NULL){
			head2=temp2;
			head2->next=NULL;
		}
		else{
			temp2->next=head2;
			head2=temp2;

		}
	}
	temp=head2;
	printf("\n");
	curr=head;
	temp=head->next;
	temp2=head2;
	ne=curr->next;
	while(temp2->next!=NULL || temp){
		if(temp2->next!=NULL){
			curr->next=temp2;
			curr=temp2;
			temp2=temp2->next;
			curr->next=NULL;
		}
		if(temp){
			curr->next=temp;
			curr=temp;
			temp=temp->next;
			curr->next=NULL;
		}
	}

}
void main(){
	clrscr();
	sample();
	display();
	rearange();
	display();
	getch();
}
