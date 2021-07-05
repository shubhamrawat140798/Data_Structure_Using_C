// DFS Placement Assignment
#include<conio.h>
#include<stdio.h>
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
struct node* temp;
int size=0;
void traverse();
void sample();
void display();
void insertAtbegining();
void insertAtend();
void insertAtmiddle();
void deleteAtbegining();
void deleteAtend();
void deleteAtmiddle();
void countNode();
void main(){
	int choice,subchoice;
	clrscr();
	printf("Author -Shubham Rawat");
	printf("\n Menu:\n\t 1.Traversing the list \n\t 2.Insertion \n\t 3.Deletion \n\t 4.Count the number of nodes \n\n\t Enter your choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			traverse();
			break;
		case 2:
			printf("\n Insertion Menu: \n\t 1.Insertion at the begining \n\t 2.Insertion at end \n\t 3.Insertion at middle \n\n\t Enter your choice: ");
			scanf("%d",&subchoice);
			if(subchoice==1){
				insertAtbegining();
				display(); }
			else if(subchoice==2){
				insertAtend();
				display(); }
			else if(subchoice==3){
				insertAtmiddle();
				display(); }
			else
				printf("\n\n\t Wrong Input!") ;
			break;
		case 3:
			printf("\n Deletion Menu: \n\t 1.Deletion at the begining \n\t 2.Deletion at end \n\t 3.Deletion at middle \n\n\t Enter your choice: ");
			scanf("%d",&subchoice);
			if(subchoice==1){
				deleteAtbegining();
				display(); }
			else if(subchoice==2){
				deleteAtend();
				display(); }
			else if(subchoice==3){
				deleteAtmiddle();
				display(); }
			else
				printf("\n\n\t Wrong Input!") ;
			break;
		case 4:
			countNode();
			break;
		default:
			printf("\n Wrong Input");
	}
	getch();
}
void traverse(){
	sample();
	display();
}
void sample(){
	int size=1;
	while(size<6){
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data= size;
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
		size++;
	}

}
void display(){
	size=0;
	temp=head;
	printf("\n\t Linked list: ");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
		size++;
	}
}
void insertAtbegining(){
	struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	sample();
	display();
	printf("\n\n\t Enter data in the node: ");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	printf("\n\t After Insertion At the Begining ");
}
void insertAtend(){
	struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	sample();
	display();
	printf("\n\n\t Enter data in the node: ");
	scanf("%d",&newnode->data);
	tail->next=newnode;
	tail=newnode;
	tail->next=NULL;
	printf("\n\t After Insertion At the End ");
}
void insertAtmiddle(){
	struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	int index;
	sample();
	display();
	printf("\n\n\t Enter data in the node: ");
	scanf("%d",&newnode->data);
	printf("\n\t Enter the position: ");
	scanf("%d",&index);
	if(index>1 & index<size){
		int i=0;
		temp = head;
		while(i<index-2){
		temp=temp->next;
		i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
		printf("\n\t After Insertion At the Middle index %d",index);
	}
	else
		printf("\n\t Wrong position ");


}
void deleteAtbegining(){
	sample();
	display();
	temp=head;
	head=temp->next;
	free(temp);
	printf("\n\t After the deletion At the Begining ");
}
void deleteAtend(){
	sample();
	display();
	temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	tail=temp;
	temp=temp->next;
	free(temp);
	tail->next=NULL;
	printf("\n\t Ater deletion At the End ");
}
void deleteAtmiddle(){
	struct node* freeNode;
	int index;
	sample();
	display();
	printf("\n\t Enter the position: ");
	scanf("%d",&index);
	if(index>1 & index<size){
		int i=0;
		temp = head;
		while(i<index-2){
		temp=temp->next;
		i++;
		}
		freeNode=temp->next;
		temp->next=freeNode->next;
		free(freeNode);
		printf("\n\t After Deletion At the Middle index %d",index);
	}
	else
		printf("\n\t Wrong position ");

}
void countNode(){
	int count=0;
	sample();
	display();
	temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	printf("\n\t Number of nodes in the Linked list: %d",count);

}
