/*
Q1. WAP to insert the element in an array:
a) Insert at first location 10
Input: 23,34,45,55,67,90
Output: 10,23,34,45,55,67,90
b) Insert at 3rd location 30
Input: 10,23,34,45,55,67,90
Output: 10,23,30,34,45,55,67,90
c) Insert at last location 100
Input: 23,34,45,55,67,90
Output: 23,34,45,55,67,90,100
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10]={23,34,45,55,67,90},choice,i,temp=0,index=0;
    clrscr();
    printf("Choices: \n 1.Press 1 for Insert at first location");
    printf("\n 2.Press 2 for Insert at last location");
    printf("\n 3.Press 3 for Insert at index location");
    printf("\n your choice: ");
    scanf("%d",&choice);
    switch(choice){
	case 1:
		for( i = 5;i>=0;i--){
			arr[i+1]=arr[i];
		}
		printf("\n Enter no. for insertion: ");
		scanf("%d",&arr[0]);
		break;
	case 2:
		printf("\n Enter no. for insertion: ");
		scanf("%d",&arr[7]);
		break;
	case 3:
		printf("\n Enter no. for insertion: ");
		scanf("%d",&temp);
		printf("\n Enter index for insertion: ");
		scanf("%d",&index);
		for( i = 5;i>=index;i--){
			arr[i+1]=arr[i];
		}
		arr[index]=temp;
		break;
	default:
	      printf("\n Wrong input!");

    }
    printf(" \n array \n");
    for( i = 0;i<=7;i++){
		printf(" %d   ",arr[i]);
    }

    getch();
}


