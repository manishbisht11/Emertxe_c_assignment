/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Number is odd or even and its signedness 
Date : 
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
   	int num, check = 0x80000000;
	char opt;
	do
	{
		printf("Enter the value of 'n' :");
		scanf("%d", &num);
if ( num > pow(2, 16))
{
	printf("Invalid number");
	exit(0);
}

		//the value of num is AND with the 1. if condition will true it will enter in the block otherwise it will go in the else condition. 
		if( num & 1 )
		{

			//the value of num is AND with the value ofcheck. if condition will true it will enter in the block otherwise it will go in the else condition. 
			if ( num & check )
				printf("negative odd number");
			else
				printf(" positive odd number");
		}
		else
		{
			//the value of num is AND with the value of check. if condition will true it will enter in the block otherwise it will go in the else condition. 
			if ( num & check )
				printf("negative even number");
			else
				printf(" positive even number");
		}

		printf("\n");
		getchar();
		printf("Do you want to continue( press Y/y for continue) :");
		scanf("%c", &opt);
	}
	//loop will terminate if the user will be other than Y or y.
	while( opt == 'Y' || opt == 'y' );
	return 0;
}
