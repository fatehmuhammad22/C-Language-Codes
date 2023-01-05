#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n, g, ng=1;
	srand(time(0));
	n=rand()%100+1;
	//printf("The number is %d\n", number);
	do{
		printf("Guess the number between 0 and 100.\n");
		scanf("%d", &g);
		
		if(g>n){
			printf("Lower Number Please.\n");}
		else if(g<n){
			printf("Greater Number Please.\n");}
		else {
			printf("You guessed in %d attempts.\n", ng);}
		ng++;}while(g!=n);
}
