#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, s, sq, x1, x2;
	printf("Input a:\n");
	scanf("%f", &a);
	printf("Input b:\n");
	scanf("%f", &b);
	printf("Input c:\n");
	scanf("%f", &c);
	s=(b*b)-(4*a*c);
	sq=sqrt(s);
	
	x1=(-b+sq)/2*a;
	x2=(-b-sq)/2*a;
	
	printf("x1 = %f\n", x1);
	printf("x2 = %f\n", x2);
}
