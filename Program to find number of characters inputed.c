#include<stdio.h>
int main(){
	int ch, cnt0=0, cntv=0, cntn=0;
	while(ch=getche()!=13){
		if(ch==0){
			cnt0++;
		}
		else if(ch=='-1' || ch=='-2' || ch=='-3' || ch=='-4'){
			cntn++;
		}
		else{
			cntv++;
		}
	}
	printf("You typed %d Positive Numbers %d negative numbers %d zeroes", cntv, cntn, cnt0);
}
