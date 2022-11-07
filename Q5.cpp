#include<stdio.h>
int main(){
	float A, p=15000, r=2.8, t=2;
	r=2.8/100;
	A = p*(1+(r*t));
	printf("%f", A);
}
