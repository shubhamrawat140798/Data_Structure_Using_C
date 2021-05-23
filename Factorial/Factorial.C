void main(){
	int b,fact=1,i;
	clrscr();
	printf("\n Author - Shubham Rawat");
	printf("\n Enter a No. : ");
	scanf("%d",&b);
	if(b>0){
		i=b;
		while(i>1){
			fact*=i;
			i--;
		}
		printf("\n %d",fact);
	}
	else{
		printf("\n Wrong input !");
	}
	getch();
}