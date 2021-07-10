8. Sort the data
#include<conio.h>
#include<stdio.h>
void insertNodes();
void display();
void sort();
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
	sort();
	display();
	getch();

}
void insertNodes(){
	int a[]={12,23,34,32,21},i=0;
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
void sort(){
	int i=0;
	struct node* temp2;
	temp=head;
	while(i<5){
		temp2=temp;
		while(temp2!=tail){
			if(temp2->data>temp2->next->data){
				int t;
				t= temp2->data;
				temp2->data=temp2->next->data;
				temp2->next->data=t;

			}
			temp2=temp2->next;
		}
		i++;
	}
}
