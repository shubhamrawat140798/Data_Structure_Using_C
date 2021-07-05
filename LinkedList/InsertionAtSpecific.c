#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node* next;
};
int N;
struct node* head=NULL;
struct node* tail=NULL;
struct node* temp=NULL;
void insert();
void display();
void position();
void main(){
	clrscr();
	insert();
	display();
	position();
	display();
	getch();
}
void insert(){
	int i,n;
	printf("\nEnter number of node you want to give: ");
	scanf("%d",&n);
	N=n;
	for(i=0;i<n;i++){
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n\nEnter node %d: ",i+1);
		scanf("%d",&newnode->data);
		if(head==NULL){
			head=newnode;
			tail=newnode;
			newnode->next=NULL;
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
	   do{
		printf("%d -> ",temp->data);
		temp=temp->next;
	   }while(temp->next!=NULL);
	   printf("%d",temp->data);
}

void position(){
	int j,i=0;
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter specific position between 1 to %d : ",N);
	scanf("%d",&j);
	temp=head;
	while(i<j-1){
		temp=temp->next;
		i++;
	}

	printf("\nEnter the node: ");
	scanf("%d",&newnode->data);
	newnode->next = temp->next;
	temp->next= newnode;
}
