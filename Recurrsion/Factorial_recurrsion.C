int Rec(int a){
	if(a>1){
	a*=Rec(a-1);
	}
	return a;
}
void main(){
	int b,fact=1,i;
	clrscr();
	printf("\n Author - Shubham Rawat \n");
	printf("\n Enter a No. : ");
	scanf("%d",&b);
	if(b>0){
		printf("\n %d",Rec(b));
	}
	else{
		printf("\n Wrong input !");
	}
	getch();
}