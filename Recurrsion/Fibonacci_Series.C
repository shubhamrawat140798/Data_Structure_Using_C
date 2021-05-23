void Fibonnaci(int a,int b,int n,int i){

	int sum=0;
	printf("%d, ",a);
	sum=a+b;
	a=b;
	b=sum;
	if(i<n-1){
		i++;
		Fibonnaci(a,b,n,i);
	}
}
void main(){
	int n;
	clrscr();
	printf("\n Author - Shubham Rawat");
	printf("\n Enter a No. : ");
	scanf("%d",&n);
	printf("\n Fibonacci Series: ");
	Fibonnaci(0,1,n,0);
	getch();

}