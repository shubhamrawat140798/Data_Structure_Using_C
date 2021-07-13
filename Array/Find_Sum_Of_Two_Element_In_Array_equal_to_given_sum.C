/*Write a program in C to find a pair with given sum in the array. 
Expected Output :
The given array : 6 8 4 -5 7 9
The given sum : 15
Pair of elements can make the given sum by the value of index 0 and 5
*/
#include<conio.h>
#include<stdio.h>
void main(){
	int a[20];
	int i,j,size,sum;
	clrscr();
	printf("Author -Shubham Rawat");
	printf("\nEnter size of array: ");
	scanf("%d",&size);
	printf("\nEnter the sum to find: ");
	scanf("%d",&sum);
	for(i=0;i<size;i++){
		printf("\nelement - %d : ",i);
		scanf("%d",&a[i]);
	}
	//find pair
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if((a[i]+a[j])==sum)
				printf("\nindexes: %d  %d",i,j);
		}
	}

	getch();
}

