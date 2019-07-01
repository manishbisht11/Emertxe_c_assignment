/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Program to find which day of the year
Date : 5-may-2019
 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int value, num, a, b;
	char choice;
	do
	{
		printf("Enter the value of 'n' : ");
		scanf("%d", &value);
		//Loop will exit if the value of user will be greater than 365
		if(value > 365)
		{
			printf("Enter the value less than 365");
			exit( 0 );
		}

		printf("1. Sunday \n");
		printf("2. Monday\n");
		printf("3. Tuesday\n");
		printf("4. Wednesday\n");
		printf("5. Thursday\n");
		printf("6. Friday\n");
		printf("7. Saturday\n");

		printf("Enter the option to set the first day :");
		scanf("%d", &num);
		//loop will exit if user enter value greater than 7
		if(num > 7)
		{
			printf("Invalid value");
			exit(0);
		}
		// the remainder of user entered (n)number to 7 will add with the first day number
		a = value % 7 + num - 1;
		//if the value of a will become 7 then it will divide with 7 and remainder will store in b
		b = a % 7;
		//according to the value of b, jumps to the case
		switch (b)
		{
			case 1 :
				printf("The %dth day is Sunday \n",value);
				break;

			case 2:
				printf("The %dth day is Monday \n",value);
				break;

			case 3:
				printf("The %dth day is tuesday \n",value);
				break;

			case 4:
				printf("The %dth day is wednesday \n",value);
				break;

			case 5:
				printf("The %dth day is thursday \n",value);
				break;

			case 6:
				printf("The %dth day is Friday \n",value);
				break;

			case 7:
				printf("The %dth day is Saturday \n",value);
				break;
			default:
				printf("The %dth day is Saturday \n",value);
		}
		getchar();
		printf("Do you want to continue ( Press Y/y for continue ) :");
		scanf("%c",&choice);
	}
	//loop will terminate when user value will be other than Y or y.
	while( choice == 'y'  || choice == 'Y' );
	return 0;
}
