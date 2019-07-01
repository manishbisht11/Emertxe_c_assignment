/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Pre and Post increment  by using function and pointers
Date : 29-5-2019

 */
#include<stdio.h>
//function protoype
int pre_inc(int *num);
int post_inc(int *num);
int main()
{
	int num, opt, i,n;
	char choice;
	do
	{
	printf("Enter a number : ");
	scanf("%d",&num);

	printf("1-Pre-increment \n");
	printf("2-Post-increment \n");
	printf("Enter your choice : ");
	scanf("%d",&opt);
	//according to user input it will jump on case
	switch(opt)
	{
		case 1:
			//function call
			n = pre_inc(&num);
			printf("i = %d num = %d ",n,num);
			break;
		case 2:
			//function call
			i = post_inc(&num);
			printf("i = %d num = %d ",i,num);
			break;
		default:
			printf("Enter valid number \n");
	}
	printf("\n");
	getchar();
	printf("Do You want to continue (Press Y/y to continue) :");
	scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');

	return 0;
}
//function define
int pre_inc(int *num)
{
	int a,n;
	unsigned int mask = 01;
	while(1)
	{
		//bitwise and b/w n and mask. condition will only true when o/p will be 1
		if(*num & mask)
		{
			//bitwise and b/w n and invert of mask
			*num = *num & ( ~mask );
			//mask is shifting to left by one position
			mask <<= 1;
		}
		else
		{
		//bitwise or  b/w n and mask.
		*num = *num | mask;
		return *num;
		}
	}
}
//function define
int post_inc(int *num)
{
	int a,n;;
	unsigned int mask = 01;
	n = *num;
	while(1)
	{
		//bitwise and b/w n and mask. condition will only true when o/p will be 1
		if(n & mask)
		{
			//bitwise and b/w n and invert of mask
			n = n & ( ~mask );
			//mask is shifting to left by one position
			mask <<= 1;
		}
		else
		{
		//bitwise or  b/w n and mask.
		n = n | mask;
		return n;
		}
	}
}
