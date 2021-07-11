#include<conio.h>
#include<stdio.h>
struct node{
	int data;
	struct node* next;
	struct node* pre;
};
struct node* head=NULL;
struct node* tail=NULL;
struct node* temp=NULL;
int size=0;
void sample();
void display();
void InsertAtBegining();
void InsertAtEnd();
void InsertAtPos();
void DeleteAtBegining();
void DeleteAtEnd();
void DeleteAtSpecific();
void Search();
void Sort();
void Reverse();
void Max();
void Count();
void main(){
	int i;
	clrscr();
	printf("Author-Shubham Rawat");
	sample();
	display();
	printf("\nMenu: \n 1.Insertion \n 2.Deletion \n 3.Search Data \n 4.Sorted \n 5.Reverse linked list \n 6.Maximum No. \n 7.Count length \n Enter your choice: ");
	scanf("%d",&i);
	switch(i){
		case 1:
			printf("\n 1.Insertion at the begining \n 2.Insertion at the end \n 3.Insertion at a specific position \n ");
			printf("\n Enter your choice: ");
			scanf("%d",&i);
			switch(i){
				case 1:
					InsertAtBegining();
					display();
					break;

				case 2:
					InsertAtEnd();
					display();
					break;

				case 3:
					InsertAtPos();
					display();
					break;

				default:
					printf("\n Wrong input!");
					break;
				}
				break;
		case 2:
		       printf("\n 1.Deletion at the begining \n 2.Deletion at the end \n 3.Deletion at a specific position \n ");
		       printf("\n Enter your choice: ");
		       scanf("%d",&i);
		       switch(i){
				case 1:
					DeleteAtBegining();
					display();
					break;

				case 2:
					DeleteAtEnd();
					display();
					break;

				case 3:
					DeleteAtSpecific();
					display();
					break;

				default:
					printf("\n Wrong input!");
					break;
				}
				break;
		case 3:
			Search();
			display();
			break;

		case 4:
			Sort();
			display();
			break;
		case 5:
			Reverse();
			display();
			break;
		case 6:
			Max();
			break;
		case 7:
			Count();
			break;
		default:
			sample();
			printf("%d",size);
			break;
	}
	getch();

}
void Count(){
	int count=0;
	temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	printf("\n There are %d Nodes",count);
}
void Max(){
	int max=0;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data > max)
			max=temp->data;
		temp=temp->next;
	}
	printf("\n The Maximum No. is %d",max);
}
void Reverse(){

	struct node* temp2;
	struct node* add;
	temp=head;
	while(temp!=NULL){
		temp2=temp->next;
		add=temp->next;
		temp->next=temp->pre;
		temp->pre=add;
		temp=temp2;
	}
	temp2=head;
	head=tail;
	tail=temp2;
}
void Sort(){
	int i=0;
	struct node* temp2;
	while(i<5){
		temp=head;
		while(temp->next!=NULL){
		     if(temp->data > temp->next->data ){
			temp2=temp->next;
			temp->next=temp2->next;
			temp2->pre=temp->pre;
			temp2->next=temp;
			temp->pre=temp2;
			if(temp==head)
				head=temp2;
			else if(temp2==tail)
				tail=temp;
			if(temp2->pre!=NULL)
				temp2->pre->next= temp2;
			else if(temp->next!=NULL){
				temp->next->pre=temp;
			}
			temp=temp2;
		     }

		     temp=temp->next;
		}
		i++;
	}
}
void Search(){
	int search,count=1,flag=0;
	printf("\nEnter the Number for search: ");
	scanf("%d",&search);
	temp=head;

	while(temp!=NULL){
		if(search==temp->data){
			flag=1;
			printf("\n%d found at %d node loction %u",search,count,temp);
		}
		count++;
		temp=temp->next;

	}
	if(flag==0)
		printf("\nNot found in the linklist");
}
void DeleteAtSpecific(){
	int i=1 , pos;
	printf("\nEnter Position: ");
	scanf("%d",&pos);
	temp=head;
	while(i<pos){
	     temp=temp->next;
	     i++;
	}
	printf("%d",temp->data);
	temp->pre->next=temp->next;
	temp->next->pre=temp->pre;
	free(temp);


}
void DeleteAtEnd(){
	 temp=tail;
	 tail=temp->pre;
	 tail->next=NULL;
	 free(temp);
}
void DeleteAtBegining(){
       temp=head;
       head=temp->next;
       head->pre=NULL;
       free(temp);
}
void InsertAtPos(){
	int i=1,pos;
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data: ");
	scanf("%d",&newnode->data);
	printf("\nEnter Position: ");
	scanf("%d",&pos);
	temp=head;
	while(i<pos-1){
	     temp=temp->next;
	     i++;
	}
	printf("%d",temp->data);
	newnode->pre=temp;
	newnode->next=temp->next;
	temp->next->pre=newnode;
	temp->next=newnode;
}
void sample(){
	int a[5] ={55,44,33,22,11};
	int i=0;
	while(i<5){
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=a[i];

		if(head==NULL){
			head=newnode;
			tail=newnode;
			head->next=NULL;
			head->pre=NULL;
		}
		else{
		     newnode->next=tail->next;
		     newnode->pre=tail;
		     tail->next=newnode;
		     tail=newnode;
		     tail->next=NULL;
		}
		i++;

	}
	size=i;
}
void display(){
	temp=head;
	printf("\n Linked list:\n");
	while(temp!=NULL){
		printf("data: %d ",temp->data);
		printf("address: %u pre: %u   next: %u\n",temp,temp->pre,temp->next);
		temp=temp->next;
	}
}
void InsertAtBegining(){
	  struct node* newnode=(struct node*)malloc(sizeof(struct node));
	  printf("\nEnter data: ");
	  scanf("%d",&newnode->data);
	  newnode->next=head;
	  head->pre=newnode;
	  head=newnode;
	  head->pre=NULL;
}
void InsertAtEnd(){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data: ");
	scanf("%d",&newnode->data);
	tail->next=newnode;
	newnode->pre=tail;
	tail=newnode;
	tail->next=NULL;
}
