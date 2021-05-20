/*
Q2. WAP to perform delete operation on an array:
a) Delete from the first location
Input: 23,34,45,55,67,90
Output: 34,45,55,67,90
b) Delete from 3rd location
Input: 23,34,45,55,67,90
Output: 23,34,55,67,90
c) Delete from last location:
Input: 23,34,55,67,90
Output: 23,34,55,67
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10]={23,34,45,55,67,90,10},choice,i,temp=0,index=0;
    clrscr();
    printf("Choices: \n 1.Press 1 for Delete at first location");
    printf("\n 2.Press 2 for Delete at last location");
    printf("\n 3.Press 3 for Delete at index location");
    printf("\n your choice: ");
    scanf("%d",&choice);
    switch(choice){
	case 1:
		for( i = 0;i<6;i++){
			arr[i]=arr[i+1];
		}
	        printf(" \n array \n");
                for( i = 0;i<6;i++){
		 printf(" %d   ",arr[i]);
		}
                break;
	case 2:
		arr[6]=0;
		printf(" \n array \n");
                for( i = 0;i<6;i++){
		 printf(" %d   ",arr[i]);
		}
		break;
	case 3:
		printf("\n Enter index for deletion: ");
		scanf("%d",&index);
		for( i = index;i<6;i++){
			arr[i]=arr[i+1];
		}
		printf(" \n array \n");
                for( i = 0;i<6;i++){
		 printf(" %d   ",arr[i]);
		}	
		break;
	default:
	      printf("\n Wrong input!");

    }

    getch();
}
