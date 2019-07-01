/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Fibbonacci series using recursion
Date : 6-may-2019
 */
#include<stdio.h>
//function prototype
int fibbo(int num, int num1, int nxt,int lim);
int fibbo_neg(int num, int num1, int nxt,int lim);
int num = 0, num1 = 1, lim, nxt,i;
int main()
{ 
	char opt;
	do
	{
		printf("Enter a number : ");
		scanf("%d",&lim);

		//if user input will be greater than 0 condition will be true
		if (lim > 0)
		{
			printf("Fibbonacci  series : ");
			//function call
			fibbo(num, num1, nxt,lim);
		}
		//if user input will be less than 0 condition will be true
		else if (lim < 0)
		{
			printf("Fibbonacci  series : ");
			//function call
			fibbo_neg(num, num1, nxt,lim);
		}
		else
		{
			printf("Number is 0. Enter number other than 0.\n ");
		}

		getchar();
		printf("Do you want to continue (Press Y/y to continue):");
		scanf("%c",&opt);
	}while( opt == 'Y' || opt == 'y');

	return 0;
}
//function defination
int fibbo(int num, int num1, int nxt,int lim)
{
	//if value of num will be less than value of lim then condition is true
	if ( num <= lim)
	{
		nxt = num + num1;
		printf("%d ",num);
		//recursion of function
		return fibbo(num1, nxt ,num + num1, lim);
	}
	else
		printf("\n");
	return 1;
}

int fibbo_neg( int num, int num1, int nxt, int lim)
{
	//if value of num will be greater than value of lim then condition is true
	if ( abs(num) <= abs(lim))
	{
		nxt = num - num1;
		printf("%d ",num);
		return fibbo_neg( num1, nxt, num - num1, lim);
	}
	else
		printf("\n");
	return 1;
}
