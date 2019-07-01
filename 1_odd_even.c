/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : To check whether number is even or odd
Date : 30-april-2019
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num; 
	char option;
	do
	{
		printf("Enter a number : ");
		scanf("%d",&num);
		if(num > pow (2, 32) || num < -pow (2, 32))
		{
			printf("Invalid Input \n");
			exit(0);
		}
		//if num will divided by 2 and remainder will be 0 then condition will true.
		if(num % 2 == 0)
		{

			if(num > 0)
				printf(" Positive even \n");
			else
				printf(" negative even \n");
		}
		else
		{
			if(num > 0)
				printf(" Positive odd \n");
			else
				printf(" negative odd \n");

		}


		getchar();
		printf("Do you want to continue (Y/N) : ");
		scanf("%c",&option);
	} while ( option == 'Y' || option == 'y' );

	return 0;
}

