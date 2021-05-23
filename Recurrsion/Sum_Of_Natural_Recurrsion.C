int Sum(int a){
	if(a>1){
		a+=Sum(a-1);
	}
	return a;
}
void main(){
	int n;
	clrscr();
	printf("Author - Shubham Rawat \n");
	printf("\n Enter a No. : ");
	scanf("%d",&n);
	printf("\n Result : %d",Sum(n));
	getch();
}