#include<stdio.h>
int main(){
	int n;
	int arr[n][n];
	int tran[n][n];
	printf("Input the size of square matrix(e.g. 1,2,3,4,etc):\n");
	scanf("%d", &n);
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;j++){
			printf("Input number in %d row and %d coloumn:\n", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;j++){
			tran[j][i]=arr[i][j];
		}
	}
	for(int k=0;k<=n-1;k++){
		for(int p=0;p<=n-1;p++){
			printf("%d\t", tran[k][p]);
		}
		printf("\n");
	}
}
