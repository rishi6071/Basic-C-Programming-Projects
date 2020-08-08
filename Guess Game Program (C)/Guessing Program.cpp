// Guessing Game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{
	int random_no,guess_no;		
	int flag,i=1;
	srand(time(0));			//Ye basically run hone pr hr baar alag random no. dega	
	random_no=rand()%100+1;
	printf("\t\t:::: Computer already chose a Number ::::\n");
	printf("\n\t\t\t\tYou Have Only 3 Attempts :-");
	do
	{	
		printf("\n\n\n\t\tEnter the Guess Number in [1,100] = ");
		scanf("%d",&guess_no);
		printf("\n\n\n");
		if(random_no==guess_no)
		{
			printf("\t\t!!! BINGO !!!");
			flag=1;
			break;
		}
		else
		{
			printf("\t\t\t~~ OOPS! WRONG ~~\n\n");
			if(i==1||i==2)
			{
//				printf("\t\t---------------------------------------------");
				if(i==1)
				{
					if(random_no>=1&&random_no<=10)
					printf("\n\t\t********** Number in b/w 1 & 10 **********");
				else if(random_no>10&&random_no<=20)
					printf("\n\t\t********** Number in b/w 10 & 20 **********");
				else if(random_no>20&&random_no<=30)
					printf("\n\t\t********** Number in b/w 20 & 30 **********");		
				else if(random_no>30&&random_no<=40)
					printf("\n\t\t********** Number in b/w 30 & 40 **********");
				else if(random_no>40&&random_no<=50)
					printf("\n\t\t********** Number in b/w 40 & 50 **********");
				else if(random_no>50&&random_no<=60)
					printf("\n\t\t********** Number in b/w 50 & 60 **********");	
				else if(random_no>60&&random_no<=70)
					printf("\n\t\t********** Number in b/w 60 & 70 **********");
				else if(random_no>70&&random_no<=80)
					printf("\n\t\t********** Number in b/w 70 & 80 **********");
				else if(random_no>80&&random_no<=90)
					printf("\n\t\t********** Number in b/w 80 & 90 **********");
				else if(random_no>90&&random_no<=100)
					printf("\n\t\t********** Number in b/w 90 & 100 **********");
				}
				printf("\n\n\t\t\t** Try Again **\n");
//				printf("\n\t\t---------------------------------------------");
			}
			else if(i==3)
			{
				printf("\n\t   ---------------------------------------------");
				printf("\n\t\t\t## YOU LOST! ##");
				printf("\n\t   ---------------------------------------------");	
			}
		}
		i++;
	}
	while(i<=3);	
}	

