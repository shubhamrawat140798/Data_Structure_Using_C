#include<stdio.h>
#include<conio.h>
void main(){
	int arr[]={1,3,2,3,4,1,6,4,3};
	int res[9];
	int count[10];
	int pos[10];
	int size,i,j,o,max=0;
	clrscr();
	printf("Author - Shubham Rawat\n");
	size=sizeof(arr)/sizeof(int);
	//Search for max in array
	for(i=0;i<size;i++){
		if(max<arr[i])
			max=arr[i];
	}
	printf("\nOriginal array:");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	//count array
	for(i=0;i<max+1;i++){
		o=0;
		for(j=0;j<size;j++){
			if(arr[j]==i)
				o++;
		}
		count[i]=o;
	}
	printf("\ncount array:   ");
	for(i=0;i<max+1;i++){
	       printf("%d ",count[i]);
	}
	//postion array
	for(i=0;i<max+1;i++){
	       pos[i]=count[i];
	}
	for(i=1;i<max+1;i++){
	       pos[i]=pos[i]+pos[i-1];
	}
	pos[0]=0;
	printf("\nPostion array: ");
	for(i=0;i<max+1;i++){
		printf("%d ",pos[i]);
	}
	for(i=0;i<size;i++){
		j=arr[i];
		pos[j]--;
		o=pos[j];
		res[o]=j;
	}
	printf("\nSorted array:  ");
	for(i=0;i<size;i++){
		printf("%d ",res[i]);
	}

	getch();

}
