//12. Count number of nodes/length of linked list
#include<conio.h>
#include<stdio.h>
struct node{
	int data;
	struct node* next;
};
struct node* head= NULL;
struct node* tail= NULL;
struct node* temp;
void sample();
void display();
void count();
void main(){
	clrscr();
	printf("Author - Shubham Rawat\n\n");
	sample();
	display();
	count();
	getch();

}
void sample(){
	int i=1;
	while(i<6){
		struct node* newnode =(struct node*)malloc(sizeof(struct node));
		newnode->data=i;
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
}
void display(){
	temp= head;
	printf("\nLinked list: ");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void count(){
	int count=0;
	temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;

	}
	printf("\nNumber of Nodes: %d ",count);
}
