void main(){
	int i,j,key,a[]={5,4,10,1,6,2};
	clrscr();
	printf("\n Before Sorting \n");
	for(i=0;i< 6;i++){
		printf("%d, ",a[i]) ;
	}

	for(i=1;i< 6;i++){
		key = a[i];
		j=i-1;
		while(a[j]>key && j>=0){
		a[j+1]=a[j];
		j--;
		}
		a[j+1]=key;
	}

		printf("\n Before Sorting \n");
		for(i=0;i< 6;i++){
		printf("%d, ",a[i]) ;
	}
	getch();
}