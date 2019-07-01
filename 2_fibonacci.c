/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : fabonacci series
Date : 02-may-2019
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int lim, sum, i, num1, num2;
	char opti,choice;
	do
	{
		sum = 0;
		num1 = 0;
		num2 = 1;
		printf("Enter a number : ");
		scanf("%d",&lim);
		//if user input will be 0 then program will exit.
		if ( lim == 0 )
			exit(0);

		printf("Fabonacci series is : ");
		//enter the loop if the value of lim is greater than 0 
		if ( lim > 0)
		{
			//this loop stops whien the value of i becomes greater than value of limit.  
			while(sum <= lim)
			{
				//if the value of sum is less than user value then it will print the value of sum
				if(sum <= lim)
				{
					printf(" %d",sum);
				}
				//adding first and second number and store the result in sum variable
				sum = num1 + num2;
				num1 = num2;
				num2 = sum;
				sum = num1;
			}
		}
		//enter in the loop if the value of lim is less than 0
		if (lim <= 0)
		{
			//if the absolute value of sum is less than the absolute user value then it will print the value of sum
			while(abs(lim) >= abs(sum))
			{
				printf("%d ", sum);
				//subtract first to second number and store the result in sum variable
				sum = num2 - num1;
				num2 = num1;
				num1 = sum;


			}
			printf("\n");
		}
		printf("\n");
		getchar();
		printf("Do you want to continue :");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');
	return 0;
}
