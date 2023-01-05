#include<stdio.h>
int main(){
	int array1[6][6];
	int array2[6][6];
	int sum[6][6];
	printf("For 1st Matrix\n");
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			printf("Input Number in %d Row and %d Coloumn:\n", i+1, j+1);
			scanf("%d", &array1[i][j]);
		}
	}
	printf("For 2nd Matrix\n");
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			printf("Input Number in %d Row and %d Coloumn:\n", i+1, j+1);
			scanf("%d", &array2[i][j]);
		}
	}
	
	
						
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			sum[i][j]= array1[i][j] + array2[i][j];
		}
	}
	for(int k=0;k<=5;k++){
		for(int f=0;f<=5;f++){
			printf("%d\t", sum[k][f]);
		}
		printf("\n");
	}
	
	
				
}

