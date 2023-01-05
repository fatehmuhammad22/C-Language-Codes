#include<stdio.h>
int main(){
	int arr[4][4]={2,0,1,1,0,-1,-2,3,1,-2,0,4,1,3,4,2};
	int tran[4][4];
	int symetric=0;
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			tran[j][i]=arr[i][j];
		}
	}
	printf("Transpose of the Matrix is:\n");
	for(int k=0;k<=3;k++){
		for(int p=0;p<=3;p++){
			printf("%d\t", tran[k][p]);
		}
		printf("\n");
	}
	for(int k=0;k<=3;k++){
		for(int p=0;p<=3;p++){
			if(arr[k][p]!=tran[k][p]){
			symetric+=1;
			}
			else{

			}
	}
	}
	if(symetric>0){
		printf("Matrix is not Symetric\n");
	}
	else{
		printf("Matrix is symetric\n");
	}
}
