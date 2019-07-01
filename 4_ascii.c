/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : print all ascii character
Date : 6-may-2019
 */
#include<stdio.h>
int main()
{
	int i;
	printf("Decimal\tOctal\thexadecimal\t ascii Char  \n");
	//loop will terminate when the value of i becomes greater than 127
	for(i = 0; i <= 127; i++)
	{
		//if the value of i will be less than 33 it will print (not printable)msg in ascii character section
		if (i < 33 || i == 127)
		printf("%d \t %o \t %hhX \t\t Not printable \n",i,i,i);
		else
		printf("%d \t %o \t %hhX \t   \t %c \n",i,i,i,i);
	}
return 0;
}
