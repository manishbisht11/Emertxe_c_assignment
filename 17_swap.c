/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Swap two numbers
Date : 15-05-2019
 */
#include<stdio.h>
//globally declare prototype of a function
int swap(int *num1, int *num2);
int main()
{
	int num1, num2;
	printf("Enter first number :");
	scanf("%d",&num1);

	printf("Enter second number :");
	scanf("%d",&num2);

	//function call
	swap( &num1, &num2 );
	printf("num1 : %d\n",num1);
	printf("num2 : %d\n",num2);
	return 0;
}
//Function define
int swap(int *num1, int *num2)
{
	int temp = 0;
	//swap the value of num1 into temp
	temp = *num1;
	//swap the value of num2 into num1
	*num1 = *num2;
	//swap the value of temp into num2
	*num2 = temp;
	return 0;
}
