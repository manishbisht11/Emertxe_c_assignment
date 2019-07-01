/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Program for to check number is perfect or not 
Date : 2-May-2019  
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,i;
	int sum;
	char opt ; 
	do
	{
		sum = 0;
		printf("Enter a number : ");
		scanf("%d",&num);

		// if the user input will be less than 1 it will show invalid input
		if ( num <= 0)
		{
			printf(" Invalid input \n");
			exit(0);
		}

		// if the user input will greater than 200000 then it will print Number out of range 
		if ( num >= pow(2,32))
		{
			printf(" Number out of range \n");
			exit(0);
		}
		//loop runs till the user given value
		for(i = 1; i < num; i++ )
		{
			//if the rem equals to 0 then the value of sum will increase by current value of sum and value of i
			if(num % i == 0)
			{
				sum = sum + i;
			}

		}
		//if the value of sum and num equals then it will print number is perfect otherwise number is not perfect
		if(sum == num)
		{
			printf("Yes, entered number is perfect number \n");
		}
		else
		{
			printf("No, entered number is not perfect number \n");

		}

		//it takes character from user 
		getchar ();
		printf("Do you want to continue (Y/N) : ");
		scanf("%c",&opt);

	}while (opt == 'Y' || opt == 'y');	
	return 0;
}
