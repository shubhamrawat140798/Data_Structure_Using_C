

/*Q16. Write a program in C to find sum of rows an columns of a Matrix. Test Data :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :
The matrix is :
5 6
7 8
The sum or rows and columns of the matrix is :
5 6   11
7 8   15

12 14
*/
#include<stdio.h>
#include<conio.h>
int a[9][9];
void main(){
	int i,j,size,sum;
	clrscr();
	printf("Author -Shubham Rawat");
	printf("\nInput the size of the square matrix: ");
	scanf("%d",&size);
	//For input
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("\nelement - [%d],[%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//sum of row
	printf("\n Matrix\n");
	for(i=0;i<size;i++){
		sum=0;
		for(j=0;j<size;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	//sum of row
	for(i=0;i<size;i++){
		sum=0;
		for(j=0;j<size;j++){
		     sum+=a[i][j];
		}
		printf("\nSum of row %d: %d",i,sum);
	}
	//sum of column
	for(i=0;i<size;i++){
		sum=0;
		for(j=0;j<size;j++){
		     sum+=a[j][i];
		}
		printf("\nSum of column %d: %d",i,sum);
	}

	getch();

}
