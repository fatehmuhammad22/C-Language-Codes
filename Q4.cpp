#include<stdio.h>
int main(){
	float d, f, average;
	printf("Input total distance in kms:\n");
	scanf("%f", &d);
	printf("Input total fuel spent in liters:\n");
	scanf("%f", &f);
	average=d/f;
	printf("Average Consumption(km/lt) = %f", average);
}
