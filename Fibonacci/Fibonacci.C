void main(){
	int i=0, j=0, k=1, sum=0,n;
	clrscr();
	printf("\n Author Shubham Rawat");
	printf("\n Enter a No. : ");
	scanf("%d",&n);
	while(i<n ){
		printf("%d,",j);
		sum=j+k;
		j=k;
		k=sum;
		i++;

	}
	getch();
}