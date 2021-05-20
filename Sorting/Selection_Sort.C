void main(){
	int i,j,n=6,pos,t,a[]={7,6,10,8,3,1};
	clrscr();
	printf("\n Before Sorting \n");
	for(i=0;i<n;i++){
		printf("%d, ",a[i]);
	}
	for(i=0;i<n-1;i++){
		pos=i;
		for(j=i+1;j<n;j++){
			   if(a[j]<a[pos]){
				pos = j;
			   }

		}
		if(pos!=i){
		t=a[i];
		a[i]=a[pos];
		a[pos]=t;
		}
	}

	printf("\n After Sorting \n");
	for(i=0;i<n;i++){
		printf("%d, ",a[i]);
	}
	getch();
}