void main(){
	int i,j,n,sum=0;
	clrscr();
	printf("\n Author - Shubham Rawat\n\n");
	printf("\n Enter a no.: ");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		sum+=i;
	}
	printf(" %d",sum);
	getch();

}