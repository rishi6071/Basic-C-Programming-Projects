// Guessing Game
/* Computer will choose the random number and user give the guess number then
	the output will be show that the guess number is equal to the random  or not
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void check(int);		//declaration
int main(void)
{
	int random_no,guess_no;
	int flag,i=1;
	srand(time(0));			//Ye basically run hone pr hr baar alag random no. dega	
	random_no=rand()%10+1;
	printf("\t\t:::: Computer already chose a Number ::::\n");
	printf("\n\n\t\t\t\t\tNote : You have only 3 Attempts :-");
	do
	{	
		printf("\n\n\n\n");
		printf("\t\tEnter the Guess Number in [1,10] = ");
		scanf("%d",&guess_no);
		printf("\n\n\n");
	
		if(random_no==guess_no)
		{
			printf("\t\t\t!!! BINGO !!!");
			flag=1;
			break;
		}
		else
		{
			if(i==1||i==2)
			{
				printf("\t\t\t~~~~~~~ Oops!  WRONG ~~~~~~~\n\n");
				printf("\n\t\t\t\t#  Try Again  #");
			}
			else if(i==3)
			{
				for(int i=1;i<=78;i++)
					printf("_");
				printf("\n\t\t\t  :::: YOU LOST ! :::: \n");	
				for(int j=1;j<=78;j++)
					printf("_");
			}
		}
		i++;
	}
	while(i<=3);	
	printf("\n\n\t\t\tComputer's Random Number = %d\n",random_no);
	for(int k=1;k<=78;k++)
		printf("_");
}	
