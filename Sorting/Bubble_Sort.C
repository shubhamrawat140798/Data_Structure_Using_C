void main()
{
	int i,j,a[]={15,16,6,8,5},n=5;
	clrscr();
	printf("\n Before Sorting:");
	for(i=0;i<n;i++){
		printf("%d, ",a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
			a[j]=a[j]+a[j+1];
			a[j+1]=a[j]-a[j+1];
			a[j]=a[j]-a[j+1];
			}
		}
	}
	printf("\n After Sorting:");
	for(i=0;i<n;i++){
		printf("%d, ",a[i]);
	}
	getch();

}