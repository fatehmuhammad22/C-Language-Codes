#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
//#include<math.h>

void cont(void);
void rule1(void);
void rule2(void);
void rule3(void);
void rule4(void);
void rule5(void);
void rule6(void);
void rule7(void);
void rule8(void);
void rule9(void);



int main(){
	
	system("cls");
	int cal;
	
	printf("\t\t      -------------------------------------------\n");
	printf("\t\t\tDIFFERENTIAION & INTEGRATION CALCULATOR\n");
	printf("\t\t      -------------------------------------------\n");
	printf("Input which Calculator you want to use:\n");
	printf("1.Diffrential Calculator\n2.Integral Calculator\n3.Exit\n");
	scanf("%d", &cal);
	
	switch(cal){
		case 1:{
			int rule;
			system("cls");
			printf("\t\t      -----------------------------\n");
			printf("\t\t\tDIFFERENTIAION CALCULATOR\n");
			printf("\t\t      -----------------------------\n");
			printf("Input which Rule you want to use:\n");
			printf("1.Constant Rule\n2.Power Rule\n3.Trigonomentric Rule\n4.Exponential Rule\n5.Logarithmic Rule\n6.Exit\n");
			scanf("%d",  &rule);
		
			switch(rule){
				case 1:{
					rule1();
					printf("\n");
					cont();
					main();
					break;
					}
				case 2:{
					rule2();
					printf("\n");
					cont();
					main();
					break;
				}
				case 3:{
					rule3();
					printf("\n");
					cont();
					main();
					break;
				}
				case 4:{
					rule4();
					printf("\n");
					cont();
					main();
					break;
				}
				case 5:{
					rule5();
					printf("\n");
					cont();
					main();
					break;
				}
				case 6:{
					if(rule==6){
						system("cls");
						main();
						}
					break;
					}
				default:{
					printf("Wrong Input!\n");
					cont();
					main();
					break;
				}
			}		
		}
		case 2:{
			
			int rule;
			system("cls");
			
			printf("\t\t      -----------------------------\n");
			printf("\t\t\tINTEGRATION CALCULATOR\n");
			printf("\t\t      -----------------------------\n");
			printf("Input which Rule you want to use:\n");
			printf("1.Power Rule\n2.Trigonomentric Rule\n3.Exponential Rule\n4.Exit\n");
			scanf("%d",  &rule);
	
			switch(rule){
				case 1:{
					rule7();
					printf("\n");
					cont();
					main();
					break;
				}
				case 2:{
					rule8();
					printf("\n");
					cont();
					main();
					break;
			}
				case 3:{
					rule9();
					printf("\n");
					cont();
					main();
					break;
				}
				case 4:{
					if(rule==4){
						system("cls");
						main();
					}
					break;
				}
				default:{
					printf("Wrong Input!\n");
					cont();
					main();
					break;
				}
		}
			break;
		}
		
		case 3:{
			if(cal==3){
				return 0;
			}
			break;
		}
		default:{
			printf("Wrong Input!\n");
			cont();
			main();
			break;
		}
}
}
void cont(void){
	printf("Press any Key to continue:");
	getch();
	system("cls");
}

void rule1(void){
	system("cls");
	int co1;
	printf("Input:\n");
	scanf("%d", &co1);
	printf("Derivation of %d is 0\n", co1);
}

void rule2(void){
	system("cls");
	int pow1,co1,pow2, co2, pow3, co3,sign1, sign2, degree, rule;
	printf("Input Number of terms in the function(1, 2 or 3):\n");
		
		scanf("%d", &degree);
		switch(degree){
			case 1:{
				printf("Input Coefficient and power of 1st term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co1, &pow1);
				printf("Derivative of %dx^%d is: ", co1, pow1);
				printf("%dx^%d", pow1*co1, pow1-1);
				break;
			}
			case 2:{
				printf("Input Coefficient and power of 1st term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co2, &pow2);
				printf("Input Sign b/w 1st and 2nd term:\n");
				scanf(" %c", &sign1);
				printf("Input Coefficient and power of 2nd term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co1, &pow1);
				printf("Derivative of %dx^%d%c%dx^%d is:", co2, pow2, sign1, co1, pow1);
				printf("%dx^%d", pow2*co2, pow2-1);
				printf("%c", sign1);
				printf("%dx^%d", pow1*co1, pow1-1);
				break;
			}
			case 3:{
				printf("Input Coefficient and power of 1st term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co3, &pow3);
				printf("Input Sign b/w 1st and 2nd term:\n");
				scanf(" %c", &sign1);
				printf("Input Coefficient and power of 2nd term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co2, &pow2);
				printf("Input Sign b/w 2nd and 3rd term:\n");
				scanf(" %c", &sign2);
				printf("Input Coefficient and power of 3rd term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co1, &pow1);
				printf("Derivative of %dx^%d%c%dx^%d%c%dx^%d is:", co3, pow3, sign1, co2, pow2,sign2, co1,pow1);
				printf("%dx^%d", pow3*co3, pow3-1);
				printf("%c", sign1);		
				printf("%dx^%d", pow2*co2, pow2-1);
				printf("%c", sign2);
				printf("%dx^%d", pow1*co1, pow1-1);
				break;
			}
		}
}
void rule3(void){
	system("cls");
		int pow, tri , valueofx;
		printf("Input the number you want to use:\n");
		printf("1.sin(x)\n2.cos(x)\n3.tan(x)\n4.cosec(x)\n5.sec(x)\n6.cot(x)\n7.Back\n");
			scanf("%d", &tri);
			switch(tri){
			case 1:{
				printf("Input Coefficient and power of x with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &valueofx, &pow);
			
				printf("Derivative of sin(%dx^%d) is:", valueofx, pow);
				printf("%dx^%dcos(%dx^%d)", valueofx*pow, pow-1, valueofx, pow);
				break;
			}
			case 2:{
				printf("Input Coefficient and power of x with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &valueofx, &pow);
			
				printf("Derivative of cos(%dx^%d) is:", valueofx, pow);	
				printf("-%dx^%dsin(%dx^%d)", valueofx*pow,pow-1,valueofx, pow);
				break;
			}
			case 3:{
				printf("Input Coefficient and power of x with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &valueofx, &pow);
				
				printf("Derivative of tan(%dx^%d) is:", valueofx, pow);
				printf("%dx^%dsec^2(%dx^%d)", valueofx*pow,pow-1,valueofx, pow);
				break;
			}
			case 4:{
				printf("Input Coefficient and power of x with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &valueofx, &pow);
				
				printf("Derivative of cosec(%dx^%d) is:", valueofx, pow);	
				printf("-%dx^%dcosec(%dx^%d)cot(%dx^%d)", valueofx*pow,pow-1,valueofx,pow, valueofx, pow);
				break;
			}
			case 5:{
				printf("Input Coefficient and power of x with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &valueofx, &pow);
				
				printf("Derivative of sec(%dx^%d) is:", valueofx, pow);
				printf("%dx^%dsec(%dx^%d)tan(%dx^%d)",valueofx*pow,pow-1, valueofx,pow,valueofx,pow);
				break;
			}
			case 6:{
				printf("Input Coefficient and power of x with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &valueofx, &pow);
				
				printf("Derivative of cot(%dx^%d) is:", valueofx, pow);	
				printf("-%dx^%dcosec^2(%dx^%d)", valueofx*pow,pow-1,valueofx, pow);
				break;
			}
			case 7:{
				break;
			}
			default:{
				printf("Wrong Input!\n");
				cont();
				rule3();
				break;
			}
		}
	
}
void rule4(void){
	system("cls");
	int exp, co, pow,a, bin=1;
	printf("Input the number you want to use:\n");
	printf("1.e^x\n2.a^x\n3.Back\n");
	scanf("%d", &exp);
	
	switch(exp){
		case 1:{
			printf("Input Coefficient and power of x with space(e.g. 5 4 = e^5x^4 ):\n");
			printf("Here 5 is Coefficient and 4 is Power.\n");
			scanf("%d %d", &co, &pow);
			
			printf("Derivative of e^%dx^%d is: ", co, pow);
			printf("%dx^%de^%dx^%d", co*pow, pow-1, co, pow);
			break;
		}
		case 2:{
			printf("Input the value of a:\n");
			scanf("%d", &a);
			printf("Input Coefficient and power of x with space(e.g. 5 4 = a^5x^4 ):\n");
			printf("Here 5 is Coefficient and 4 is Power.\n");
			scanf("%d %d", &co, &pow);
			if(pow==0){
				printf("0\n");
			}
			if(pow==1){
				for(int i=1;i<=co;i++){
					bin=bin*a;
					//printf("%d", bin);
				}
				printf("Derivative of %d^%dx^%d is: ",a, co, pow);
				printf("%d*ln(%d)*%d^x", co, a, bin);
			}
			else{
				printf("Derivative of %d^%dx^%d is: ",a, co, pow);
				printf("%d*ln(%d)*%d^(%dx^%d)*x^%d", pow*co,a,a,co,pow,pow-1);
			break;
		}
		}
		case 3:{
			break;
		}
		default:{
				printf("Wrong Input!\n");
				cont();
				rule4();
				break;
			}
	}
}
void rule5(void){
	system("cls");
	int log, co, pow;
	printf("Input the number you want to use:\n");
	printf("1.ln(x)\n2.Back\n");
	scanf("%d", &log);

	switch(log){
		case 1:{
			printf("Input Coefficient and power of x with space(e.g. 5 4 = ln(5x^4) ):\n");
			printf("Here 5 is Coefficient and 4 is Power.\n");
			scanf("%d %d", &co, &pow);
			printf("Derivative of ln(%dx^%d) is: ", co, pow);
			printf("%dx^%d/%dx^%d", pow*co,pow-1,co,pow);
			break;
		}
		case 2:{
			break;
		}
		default:{
				printf("Wrong Input!\n");
				cont();
				rule5();
				break;
			}
	}
}
void rule7(void){
	system("cls");
	int pow1,co1,pow2, co2, pow3, co3,sign1, sign2, degree, rule;
	printf("Input Number of terms in the function(1, 2 or 3):\n");
		
		scanf("%d", &degree);
		switch(degree){
			case 1:{
				printf("Input Coefficient and power of 1st term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co1, &pow1);
				if(pow1==-1){
					printf("Integration of %dx^%d is: ", co1, pow1);
					printf("%d*ln(|x|)+C", co1);
				}
				else{
					printf("Integration of %dx^%d is: ", co1, pow1);
					printf("(%dx^%d)/%d+C", co1, pow1+1,pow1+1);
				}
				
				break;
			}
			case 2:{
				printf("Input Coefficient and power of 1st term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co2, &pow2);
				printf("Input Sign b/w 1st and 2nd term:\n");
				scanf(" %c", &sign1);
				printf("Input Coefficient and power of 2nd term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co1, &pow1);
				if(pow2==-1 && pow1==-1){
					printf("Integration of %dx^%d%c%dx^%d is:", co2, pow2, sign1, co1, pow1);
					printf("%d*ln(|x|)+%d*ln(|x|)+C", co2,co1);
				}
				else if(pow2==-1){
					printf("Integration of %dx^%d%c%dx^%d is:", co2, pow2, sign1, co1, pow1);
					printf("%d*ln(|x|)+(%dx^%d)/%d+C", co2,co1, pow1+1, pow1+1);
				}
				else if(pow1==-1){
					printf("Integration of %dx^%d%c%dx^%d is:", co2, pow2, sign1, co1, pow1);
					printf("(%dx^%d)/%d+%d*ln(|x|)+C", co2, pow2+1,pow2+1,co1);
				}
				else{
					printf("Integration of %dx^%d%c%dx^%d is:", co2, pow2, sign1, co1, pow1);
					printf("(%dx^%d)/%d",co2, pow2+1,pow2+1);
					printf("%c", sign1);
					printf("(%dx^%d)/%d+C", co1, pow1+1, pow1+1);	
				}
				
				break;
			}
			case 3:{
				printf("Input Coefficient and power of 1st term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co3, &pow3);
				printf("Input Sign b/w 1st and 2nd term:\n");
				scanf(" %c", &sign1);
				printf("Input Coefficient and power of 2nd term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co2, &pow2);
				printf("Input Sign b/w 2nd and 3rd term:\n");
				scanf(" %c", &sign2);
				printf("Input Coefficient and power of 3rd term respectively with space(e.g. 5 4 ):\n");
				printf("Here 5 is Coefficient and 4 is Power.\n");
				scanf("%d %d", &co1, &pow1);
				if(pow3==-1 && pow2==-1 && pow1==-1){
					printf("Integration of %dx^%d%c%dx^%d%c%dx^%d is:",co3,pow3,sign1,co2, pow2, sign2, co1, pow1);
					printf("%d*ln(|x|)%c%d*ln(|x|)&c%d*ln(|x|)+C",co3,sign1, co2,sign2,co1);
				}
				else if(pow2==-1 && pow1==-1){
					printf("Integration of %dx^%d%c%dx^%d%c%dx^%d is:",co3,pow3,sign1,co2, pow2, sign2, co1, pow1);
					printf("(%dx^%d)/%d%c%d*ln(|x|)%c%d*ln(|x|)+C",co3, pow3+1,pow3+1,sign1, co2,sign2,co1);
				}
				else if(pow3==-1 && pow1==-1){
					printf("Integration of %dx^%d%c%dx^%d%c%dx^%d is:",co3,pow3,sign1,co2, pow2, sign2, co1, pow1);
					printf("%d*ln(|x|)%c(%dx^%d)/%d%c%d*ln(|x|)+C", co3,sign1,co2, pow2+1,pow2+1,sign2,co1);
				}
				else if(pow3==-1 && pow2==-1){
					printf("Integration of %dx^%d%c%dx^%d%c%dx^%d is:",co3,pow3,sign1,co2, pow2, sign2, co1, pow1);
					printf("%d*ln(|x|)%c%d*ln(|x|)%c(%dx^%d)/%d+C", co3,sign1,co2,sign2,co1, pow1+1,pow1+1);
				}
				else if(pow3==-1){
					printf("Integration of %dx^%d%c%dx^%d%c%dx^%d is:",co3,pow3,sign1,co2, pow2, sign2, co1, pow1);
					printf("%d*ln(|x|)%c%dx^%d)/%d+%c%dx^%d)/%d+C",co3,sign1, co2,pow2+1,pow2+1,sign2,co1, pow1+1, pow1+1);
				}
				else if(pow2==-1){
					printf("Integration of %dx^%d%c%dx^%d%c%dx^%d is:",co3,pow3,sign1,co2, pow2, sign2, co1, pow1);
					printf("(%dx^%d)/%d%c%d*ln(|x|)%c(%dx^%d)/%d+C",co3,pow3+1,pow3+1,sign1,co2,sign2, co1,pow1+1,pow1+1);
				}
				else if(pow1==-1){
					printf("Integration of %dx^%d%c%dx^%d%c%dx^%d is:",co3,pow3,sign1,co2, pow2, sign2, co1, pow1);
					printf("(%dx^%d)/%d%c(%dx^%d)/%d%c%d*ln(|x|)+C",co3,pow3+1,pow3+1,sign1,co2, pow2+1,pow2+1,sign2,co1);
				}	
				else{
				printf("Integration of %dx^%d%c%dx^%d%c%dx^%d is:", co3, pow3, sign1, co2, pow2,sign2, co1,pow1);
				printf("(%dx^%d)/%d",co3, pow3+1,pow3+1);
				printf("%c", sign1);
				printf("(%dx^%d)/%d",co2, pow2+1,pow2+1);		
				printf("%c", sign2);
				printf("(%dx^%d)/%d+C",co1, pow1+1,pow1+1);
			}
				break;
			}
		}
}
void rule8(void){
	system("cls");
		int pow, tri , valueofx;
		printf("Input the number you want to use:\n");
		printf("1.sin(x)\n2.cos(x)\n3.sec^2(x)\n4.sec(x)tan(x)\n5.cosec(x)cot(x)\n6.cosec^2(x)\n7.Back\n");
			scanf("%d", &tri);
			switch(tri){
			case 1:{
				printf("Input Coefficient x :\n");
				scanf("%d", &valueofx);
			
				printf("Integration of sin(%dx) is:", valueofx);
				printf("(-cos(%dx))/%d+C", valueofx,valueofx);
				break;
			}
			case 2:{
				printf("Input Coefficient x :\n");
				scanf("%d", &valueofx);
			
				printf("Integration of cos(%dx) is:", valueofx);
				printf("(sin(%dx))/%d+C", valueofx,valueofx);
				break;
			}
			case 3:{
				printf("Input Coefficient x :\n");
				scanf("%d", &valueofx);
			
				printf("Integration of sec^2(%dx) is:", valueofx);
				printf("(tan(%dx))/%d+C", valueofx,valueofx);
				break;
			}
			case 4:{
				printf("Input Coefficient x :\n");
				scanf("%d", &valueofx);
			
				printf("Integration of sec(%dx)tan(%dx) is:", valueofx,valueofx);
				printf("(sec(%dx))/%d+C", valueofx,valueofx);
				break;
			}
			case 5:{
				printf("Input Coefficient x :\n");
				scanf("%d", &valueofx);
			
				printf("Integration of cosec(%dx)cot(%dx) is:", valueofx, valueofx);
				printf("(-cosec(%dx))/%d+C", valueofx,valueofx);
				break;
			}
			case 6:{
				printf("Input Coefficient x :\n");
				scanf("%d", &valueofx);
			
				printf("Integration of cosec^2(%dx) is:", valueofx);
				printf("(-cot(%dx))/%d+C", valueofx,valueofx);
				break;
			}
			case 7:{
				break;
			}
			default:{
				printf("Wrong Input!\n");
				cont();
				rule8();
				break;
			}
		}
	
}
void rule9(void){
	system("cls");
	int exp, co, pow,a, bin=1;
	printf("Input the number you want to use:\n");
	printf("1.e^x\n2.a^x\n3.Back\n");
	scanf("%d", &exp);
	
	switch(exp){
		case 1:{
			printf("Input Coefficient of x (e.g. 5 = e^5x ):\n");
			scanf("%d", &co);
			
			printf("Integration of e^%dx is: ", co);
			printf("(e^%dx)/%d+C", co, co);
			break;
		}
		case 2:{
			printf("Input the value of a:\n");
			scanf("%d", &a);
			printf("Input Coefficient of x (e.g. 5 = a^5x ):\n");
			scanf("%d", &co);
			if(co==0){
				printf("Undefined\n");
			}
			else{
				//for(int i=1;i<=co;i++){
				//	bin*=a;
				//}
				printf("Integration of %d^%dx is: ",a, co);
				printf("(%d^%dx)/%dln(%d)+C", a,co, co, a);
			}
			break;
		}
		case 3:{
			break;
		}
		default:{
				printf("Wrong Input!\n");
				cont();
				rule9();
				break;
			}
	}
}


