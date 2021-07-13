/* Write a program in C to find the missing number from a given array. There are no duplicates in list. 
Expected Output :
The given array is : 1 3 4 2 5 6 9 8
The missing number is : 7
*/
#include<conio.h>
#include<stdio.h>
void main(){
	int a[20];
	int i,j,size,max,min,flag=0;
	clrscr();
	printf("Author -Shubham Rawat");
	printf("\nEnter size of array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\nelement - %d : ",i);
		scanf("%d",&a[i]);
	}
	//find max  and min
	min=a[0];
	max=a[0];
	for(i=0;i<size;i++){
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("\nmax %d min %d",max,min);
	for(i=min+1;i<max;i++){
		flag=0;
		for(j=0;j<size;j++){
			if(i==a[j])
				flag=1;
		}
		if(flag==0)
			printf("\nMissing value: %d",i);
	}
	getch();
}
