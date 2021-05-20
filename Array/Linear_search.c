/*
Q3. WAP to perform linear search operation on an array:
 Input: 23,34,45,55,67,90
a) Search 34 and print its location
b) Search 100 and print an appropriate message
c) Input: 23,34,45,55,67,90,90,90
Search 90, print its location, and how many times it occurs in the array.
*/

#include<conio.h>
#include<stdio.h>
void main(){
	int a[10]={23,34,45,55,67,90,90,90},num,i,count=0;
	clrscr();
	printf("\n Enter number for search: ");
	scanf("%d",&num);
	for(i=0; i<8;i++){
		if(num==a[i]){
			printf("\n index [ %d } ",i);
			count++;
		}
	}
	if(count==0){
		printf("\n The input number %d is not present in the array ",num);

	}
	else{
		printf("\n frequency is %d ",count );
	}
	getch();	
}