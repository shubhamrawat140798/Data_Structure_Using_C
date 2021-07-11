/*15. Create a menu-driven program to perform the following operations on matrices:
1. Addition of two matrices
2. Subtraction of two matrices
3. Multiplication of two matrices
4. Transpose of a matrix
5. Sum of left and right diagonal elements
*/
#include<conio.h>
#include<stdio.h>
int a[3][3]={1,2,3,4,5,6,7,8,9};
int b[3][3]={0,1,2,3,4,5,6,7,8};
void addition();
void subtract();
void display();
void display2();
void multiple();
void trasnpose();
void digonalSum();
void main(){
	int i;
	clrscr();
	printf("Author - Shubham Rawat");
	printf("\nMenu: \n 1.Addition of two matrices \n 2.Subtraction of two matrices \n 3.Multiplication of two matrix \n 4.Tanspose of a matrix \n 5.Sum of left and right diagonal elements");
	printf("\nEnter your Choice: ");
	scanf("%d",&i);
	switch(i){
		case 1:
			addition();
			break;
		case 2:
			subtract();
			break;
		case 3:
			multiple();
			break;
		case 4:
			trasnpose();
			break;
		case 5:
			digonalSum();
			break;
	}
	getch();
}
void digonalSum(){
 int i,j,sum=0;
 display2();
 printf("\n Sum of Digonal Matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j)
				sum+=a[i][j];
			else if((i+j)==2 & i!=j)
				sum+=a[i][j];
		}

	}
	printf("\n Sum of Digonal is %d",sum);

}
void trasnpose(){
	int i,j,t[3][3];
	display2();
	printf("\n Transpose Matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			t[i][j]=a[j][i];
			printf(" %d ",t[i][j]);
		}
		printf("\n");
	}

}
void display2(){
	int i,j;
	printf("\n Original Matrix  \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}

}
void multiple(){
       int i,j,res[3][3];
	display();
	printf("\n Mul Matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			res[i][j]=a[i][j]*b[i][j];
			printf(" %d ",res[i][j]);
		}
		printf("\n");
	}
}
void subtract(){
	int i,j,res[3][3];
	display();
	printf("\n Sub Matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			res[i][j]=a[i][j]-b[i][j];
			printf(" %d ",res[i][j]);
		}
		printf("\n");
	}
}
void addition(){
	int i,j,res[3][3];
	display();
	printf("\n Add Matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			res[i][j]=a[i][j]+b[i][j];
			printf(" %d ",res[i][j]);
		}
		printf("\n");
	}
}
void display(){
	int i,j;
	printf("\n Matrix 1 \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Matrix 2 \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",b[i][j]);
		}
		printf("\n");
	}


}
