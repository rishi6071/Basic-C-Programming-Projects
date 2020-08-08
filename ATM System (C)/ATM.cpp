/*	ATM  Banking  System	*/
#include<stdio.h>
#include<conio.h>
#include"code.h"
int main()
{
FILE *fp;
line();
int pin;
printf("\t\t\t** WELCOME IN THE ATM MACHINE **");
printf("\n\t\t\t  ---------------------------\n");
line();
space();
printf("-- INSERT YOUR ATM CARD-- \n");
pin:
line();
printf("\n");
space();			//Space Function in "code.h" header
printf("   -- ENTER YOUR PIN --");
space();
printf("\t     ");
scanf("%4d",&pin);
printf("\n");
line();	
fp=fopen("database.txt","a");
fprintf(fp,"\n");
int j=1;
while(j<=145)
{
	fprintf(fp,"*");
	j++;
}
int dep=NULL,with,bal=NULL;
line();				//Star Line Function in "code.h" header file	
choose:
space();
printf("Press 1 for CASH WITHDRAWL :");
space();
printf("Press 2 for CASH DEPOSIT :");
space();
printf("Press 3 for BALANCE INQUIRY :");
space();
printf("Press 4 for PIN CHANGE :");
space();
printf("Press 5 for EXIT :");
space();
int choice;
scanf("%d",&choice);
switch(choice)
{
	case 1:
	 	line();		
		space();
		printf(": ENTER AMOUNT TO WITHDRAW :");
		printf("\n\n\t\t\t\t  ");
		scanf("%d",&with);
		if(dep==NULL)	
		{
			printf("\n\t\t\t\tBALANCE = ZERO");	
			printf("\n\t\t\t! PLEASE DEPOSIT THE AMOUNT !\n");
			line();
			goto label;
		} 	
		else if(bal>=with)
		{
			bal=bal-with;
			line();
			printf("\n\t\t\t");
			printf("AMOUNT WITHDRAW : %d",with);
		 	printf("\n\t\t\tBALANCE REMAINS : %d\n",bal);
		 	line();
		 	fprintf(fp,"\n\t\t\t\tAMOUNT WITHDRAW : %d\n",with);	
		}
		else if(bal<with)
		{
		 	line();	
			space();
			printf("! YOUR ACCOUNT BALANCE IS NOT SUFFICIENT !\n");
			line();
			goto choose;
		} 
		break;
	 
	case 2:
		line();		
		label:
		space();		
		printf(": ENTER AMOUNT TO DEPOSIT :");
		printf("\n\n\t\t\t\t  ");
		scanf("%d",&dep);
		line();
		printf("\t\t\t\t");
		printf("AMOUNT DEPOSITED\n");
		line();
		space();
		fprintf(fp,"\n\t\t\t\tAMOUNT DEPOSITED : %d\n",dep);
		bal=bal+dep;
		goto choose;
		break;	
	
	case 3:
	 	line();
		space();
		printf(" YOUR ACCOUNT BALANCE : %d \n",bal);
		line();
		goto choose; 	
	
	case 4:
	 	int ch_pin,c_pin;	//change and confirm pin
		line();
	 	space();
	 	printf("--- ENTER OLD PIN ---");
	 	space();
	 	printf("\t  ");
		scanf("%d",&pin);
	 	space();
	 	printf("--- ENTER NEW PIN ---");
	 	space();
	 	printf("\t  ");
		scanf("%d",&ch_pin);
	 	space();
	 	printf("--- CONFIRM PIN ---");
	 	space();
	 	printf("\t  ");
	 	scanf("%d",&c_pin);
	 	printf("\n");
		if(c_pin==c_pin)
	 	{
			line();
			space();
			printf("** PIN CHANGED **\n\n"); 
			line();	
			goto pin;
		}
		exit:						
		break;
	
	case 5:
		goto exit;
		
	default:
		line();				
		printf("\t\t\t\t");
		printf("Wrong Choice");
		printf("\n\t\t\t\t------------\n");	
		printf("\t\t\t--");
		printf("Please Press the Right Key--\n");
		line();
		goto choose;
}
 	fprintf(fp,"\n");
	int i=1;
	while(i<=145)
	{
		fprintf(fp,"*");
		i++;
	}
	fclose(fp);
}
