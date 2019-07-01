/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : read input from user
Date : 23-may-2019
 */
#include<stdio.h>
//function define
int read_int()
{
	char c;
	int out = 0;
	//TAKING char FROM USER
	c=getchar();
	//loop will run till the enter
	while (c != '\n')
	{
		out = out * 10 + c -'0';
	//TAKING char FROM USER
		c=getchar();
	}
	return out;
}
int main()
{
	int out;
	printf("enter a number : ");
	//function call
	out = read_int();
	printf("Entered number : %d",out);
	return 0;
}
