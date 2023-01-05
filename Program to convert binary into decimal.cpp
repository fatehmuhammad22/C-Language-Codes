#include<stdio.h>
int main(){
	int num, last=0, i;
	int bin=0 , place=1;
	printf("Input a number:\n");
	scanf("%d", &num);
	do{
		last=num%2;
		num=num/2;
		bin = bin + (last*place);
		place = place * 10;
		i++;
	}while(num!=0);
	printf("%d", bin);
	}

