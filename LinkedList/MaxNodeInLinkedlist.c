//11. Find the maximum value
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
void max();
void main(){
	clrscr();
	printf("Author - Shubham Rawat\n\n");
	sample();
	display();
	max();
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
void max(){
	int max=0,count=1,maxp;
	temp=head;
	while(temp!=NULL){
		if(temp->data>max)
			max=temp-data;
			maxp=count;
		temp=temp->next;
		count++;
	}
	printf("\nMaximum No: %d \Position: %d",max,maxp);
}
