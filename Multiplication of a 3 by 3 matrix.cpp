#include<stdio.h>
int main(){
	int matrix1[3][3];
	int matrix2[3][3];
	int product[3][3];
	int sum;
	printf("Input Elements of 1st Matrix:\n");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			printf("Input Element of %d row and %d coloumn:\n", i+1,j+1);
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("Input Elements of 2nd Matrix:\n");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			printf("Input Element of %d row and %d coloumn:\n", i+1, j+1);
			scanf("%d", &matrix2[i][j]);
		}
	}
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			sum=0;
			for(int k=0;k<=2;k++){
			sum+=matrix1[i][k]*matrix2[k][j];
			}
			product[i][j]=sum;
		}
	}
	printf("Matrix after Product is:\n");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			printf("%d\t", product[i][j]);
		}
		printf("\n");
	}
	
}
