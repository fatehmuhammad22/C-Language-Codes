#include<stdio.h>
//Program to calculate perimeter of a rectangle
int main(){
	float l,w,p;
	printf("Input Length of Rectangle:\n");
	scanf("%f", &l);
	printf("Input Width of Rectangle:\n");
	scanf("%f", &w);
	p=2*(l+w);
	printf("Perimeter of Rectange is:%f", p);
	return(0);
}
