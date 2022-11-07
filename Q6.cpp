#include<stdio.h>
int main(){
	float f, c;
	printf("Input Temperature in Fahrenheit:\n");
	scanf("%f", &f);
	c=(f-32)*(0.55555);
	printf("Temperature in Celsius = %f", c);
}
