/*Write a program in C to find the second largest element in an array. Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int a[5],i,max=0,smax=0;
	clrscr();
	printf("Author Shubham Rawat");
	//insert element in the array
	for(i=0;i<5;i++){
		printf("\nEnter element - %d: ",i);
		scanf("%d",&a[i]);
	}
	//Search for greatest no.
	for(i=0;i<5;i++){
		if(a[i]>max)
			max=a[i];
	}
	for(i=0;i<5;i++){
		if(a[i]>smax &a[i]!=max)
			smax=a[i];
	}
	printf("\nSecond largest element in the array is: %d",smax);

	getch();
}
