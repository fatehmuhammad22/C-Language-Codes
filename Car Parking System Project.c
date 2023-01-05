#include<stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>

int repeat=0,day,car=0,motorcycle=0,totalamount=0,amount=0,vehno;
char cnic[20],choice,vehicle,paid,password[]={"fast"};
//password for review:fast


int fee(char v)
{  int fees;
   switch(v)
     {  case'c':  
           if(day>5)
             printf("\tHourly fee:Rs.400\n");
           else
             printf("\tHourly fee:Rs.200\n");
             fees=200;
         break;
   
        case'm':
            if(day<5)
             printf("\tHourly fee:Rs.50\n");
           else
             printf("\tHourly fee:Rs.100\n");
             fees=50;}
    switch(day){
       case 1 ... 5:
         break;
       case 6 ... 7:
         fees*=2;
         break;
}
 amount+=fees;
 return fees;
}

void recipt(int hours,int count,char v){
  
  FILE *fp;
  system("cls");
  puts("");
  vehno++;
  printf("\n\t\tRECIPT FOR WAYNE PARKING\n\n   ---------------------------------------------------------\n\n\n");
  int totalfee=(fee(v)*hours);
  printf("\n\tHours Parked:%d hours\n",hours);
  printf("\n\tTotal fee:Rs.%d\n",totalfee);
  printf("\n\tVehicle no:%d",vehno);
  printf("\n\n\tFEES PAID\n\n\n   ---------------------------------------------------------\n\n\n\n\tTHANKS FOR USING WAYNE PARKING\n\n\n\n\n\n\n\n");

  totalamount+=totalfee;

  if(v=='c')
  { fp=fopen("cars.txt","a+");
    fprintf(fp,"%d %s\n",vehno,cnic);
    fclose(fp);}

  else
  { fp=fopen("m.txt","a+");
    fprintf(fp,"%d %s\n",vehno,cnic);
    fclose(fp);}

}


void takecar(){
 
  FILE *fp;
  fp=fopen("cars.txt","r");
  int no,flag=0;
  int check1;
  char line[30],check2[30],cn[20];
      if (fp==NULL)
      printf("\tFile does not exists \n");
   else{
      fflush(stdin);
	  printf("\n\tEnter vehicle number assigned:");
	  fflush(stdin);
	  scanf("%d",&no);
	  printf("\tEnter cnic:");
	  fflush(stdin);
	  gets(cn);
         while(!feof(fp)){
            fscanf(fp,"%d %s",&check1,&check2);
            if((check1==no)&&(strcmp(check2,cn)==0))
            flag=1;
          }
         if(flag==1){
		    printf("\tYou have taken your vehicle succesfully");
            car--;
			 }
         else 
           printf("\tNo such record");
    }
       fclose(fp);

}


void parkcar(){

  if(car>=20)
     printf("\tNo car slots empty");

  else{
     puts("");
     printf("\n\n\tHOURLY FEE FOR CARS:\n\n\t1.Rs.200 on weekday\n\t2.Rs.400 for weekend\n");
     int hours;
     printf("\n\tEnter the no of hours you wish to park:\n\n\tHours:");
     scanf("%d",&hours);

        while(hours<0)
        {  printf("\tWrong hours please input correctly:");
           scanf("%d",&hours);
		     }
     car++;
     recipt(hours,car,'c');
	 
	  }

}



 void parkmotorcycle(){

   if(motorcycle>=20)
      printf("\tNo motorcycle slots empty");

   else{
      puts("");
      printf("\n\n\tHOURLY FEE FOR MOTORCYCLES:\n\n\tRs.50 on weekday\n\tRs.100 on weekend\n");
      int hours;
      printf("\n\tEnter the no of hours you wish to park:\n\n\tHours:");
      scanf("%d",&hours);

         while(hours<0)
         { printf("Wromg hours please input correctly:");
            scanf("%d",&hours);
			  }
			  
        motorcycle++;
        recipt(hours,motorcycle,'m');
		 }
}

void takebike(){

  FILE *fp;
  fp=fopen("m.txt","r");
  int no,flag=0;
  int check1;
  char line[30],check2[30],cn[20];
      if (fp==NULL)
        printf("\tFile does not exists \n");
      else{
        fflush(stdin);
	    printf("\n\tEnter vehicle number assigned:");
	    fflush(stdin);
	    scanf("%d",&no);
	    printf("\tEnter cnic:");
	    fflush(stdin);
	    gets(cn);
          
		  while(!feof(fp)){
              fscanf(fp,"%d %s",&check1,&check2);
              if((check1==no)&&(strcmp(check2,cn)==0))
                 flag=1;
               }
          
		  if(flag==1)
         {  printf("You have taken your vehicle succesfully\n");
            motorcycle--;}
          else 
            printf("\tNo such record\n\n");
	        puts("");
	   }
       fclose(fp);

}


void welcome(){

  puts("");
  printf("\t\t\tWELCOME TO WAYNE PARKING\n\n   -----------------------------------------------------------------------------\n\tDisclaimer:\n\tIf a vehicle exceeds the time limit,it will be towed\n\n\tFor further details contact 0312-12345678\n   -----------------------------------------------------------------------------\n\n\n\n");
  printf("\n\tENTER THE FOLLOWING:\n\n\n");
  printf("\tP/p for Parking your vechicle\n");
  printf("\n\tE/e for exiting\n");
  printf("\n\tR/r for reviewing\n");
  printf("\n\tC/c for closing\n\n\n\tChoice:");
  fflush(stdin);
  scanf("%c",&choice);
  choice=toupper(choice);
  fflush(stdin);

  if (choice=='P')
  { printf("\n\n\n\n\tENTER YOUR VEHICLE:\n\n\n");
    printf("\n\tC/c for car\n");
    printf("\n\tM/m for motorcycle\n\n\n\tVehicle:");
    fflush(stdin);
    scanf("%c",&vehicle);
    vehicle=toupper(vehicle);
    fflush(stdin);
    printf("\n\n\n\tEnter your CNIC:");
    gets(cnic);
    fflush(stdin);
    system("cls");
    printf("\n\tENTER THE NUMBER FOR THE DAY OF WEEK:\n\n\n\n\tWEEKDAYS:\n\n\n\t1.Monday\t\t2.Tuesday\n\n\t3.Wednesday\t\t4.Thursday\n\n\t5.Friday\n\n\n\tWEEKENDS:\n\n\n\t6.Saturday\t\t7.Sunday\n\n\n\tDay:");
    fflush(stdin);
    scanf("%d",&day);
    fflush(stdin);
   
     while((day<1)||(day>7))
     {
        printf("\tIncorrect day enter again\n\tDay:");
        scanf("%d",&day);
        fflush(stdin);
          }
    printf("\n\n\n");
   }
    else if (choice=='E')
  { printf("\n\n\n\n\tENTER YOUR VEHICLE:\n\n\n");
    printf("\n\tC/c for car\n");
    printf("\n\tM/m for motorcycle\n\n\n\tVehicle:");
    fflush(stdin);
    scanf("%c",&vehicle);
    vehicle=toupper(vehicle);
    fflush(stdin);
    system("cls");}
    
}


void review(){

  FILE *fp;
  char line[100];
  int devans,hours;
  char cnic[30];
  printf("\n\n\n\n\n\n\n\tEnter the password:");
  char pass[3];
  int flag=0,j;
  gets(pass);

//To match the ascii values of each character from the set password  
for(j=0;j<=3;j++)
{  if(pass[j]==password[j])
   flag++;
   }

if(flag!=4){
  printf("\tUnauthorized user\n");}

else{
  system("cls");
  printf("\n\tINPUT THE FOLLOWING:\n\n\n");
  printf("\t1.Checking the total no of vehicles parked\n\n");
  printf("\t2.Total fee collected\n\n");
  printf("\t3.Complete record for cars parked\n\n");
  printf("\t4.Complete record for motorcycles parked\n\n\n\tChoice:");
  scanf("%d",&devans);
  puts("");}

switch(devans)
{  case 1:
     printf("\n\n\n\tCars parked:%d\n\n",car);
     printf("\tMotorcycles parked:%d\n\n",motorcycle);
     printf("\tTotal Vehicles parked:%d\n\n\n",car+motorcycle);
     break;
  
   case 2:
     printf("\n\n\n\tTotal amount collected:%d\n\n\n\n",totalamount);
     break;
  
   case 3:
     fp=fopen("cars.txt","r");
     if(fp==NULL)
     printf("Error");
     else{
        while(!feof(fp)){
           fscanf(fp,"%d %s\n",&hours,&cnic);
           printf("\tCnic:%s\tHours:%d\n",cnic,hours);}
         }
	 fclose(fp);
     puts("");
	 break;
 
   case 4:
     fp=fopen("m.txt","r");
     if(fp==NULL)
     printf("\tError");
     else{
        while(!feof(fp)){
           fscanf(fp,"%d %s\n",&hours,&cnic);
           printf("\tCnic:%s\tHours:%d\n",cnic,hours);}
         }
	 fclose(fp);
	 puts("");
     break;
    }
    
}


void cont(){
  printf("\tPress any Key to continue:");
  getch();
  system("cls");
}


void intro(){
	
  printf("\n\t\t\t\tPARKING MANAGEMENT SYSTEM (PF PROJECT)\n\n");
  printf("\t\t\t\t\t\tFALL 2022\n\n");
  printf("\n\n\n\tGroup Members:\n\n");
  printf("\n\t1)Uzair Ahmed (22k-4189)\n");
  printf("\n\t2}Ali Bilal (22k-4227)\n");
  printf("\n\t3)Fateh Muhammad (22k-4375)\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPress any key to continue:");
  getch();
  system("cls");

}

void main(){	

 if(repeat==0)
  intro();

 welcome();
 repeat=1;

if(choice=='P'&&vehicle=='C')
{
 parkcar();
 cont();
 main();}

else if(choice=='E'&&vehicle=='C')
{
 takecar();
 cont();
 main();}

else if(choice=='P'&&vehicle=='M')
{
 parkmotorcycle();
 cont();
 main();}

else if(choice=='E'&&vehicle=='M')
{
 takebike();
 cont();
 main();}

else if(choice=='R')
{ 
 review();
 cont();
 main();}

else if(choice=='C')
 printf("\n\n\n\n");

else
{
 printf("\tWrong Choice\n");
 cont();
 main();}

}
