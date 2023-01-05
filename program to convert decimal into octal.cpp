#include<stdio.h>
int main(){
	int num, last=0, i;
	int bin=0 , place=1;
	printf("Input a number:\n");
	scanf("%d", &num);
	do{
		last=num%8;
		num=num/8;
		bin = (bin*10)+last;
		i++;
	}while(num!=0);
	printf("%d", bin);
	}

