/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : program of 2's compliment
Date : 9-may-2019
 */
#include<stdio.h>
int main()
{
	int num, b, i, num1;
	unsigned int check = 0x80000000;
	char opt;
	do
	{
		printf("Enter the number :");
		scanf("%d", &num);
		printf(" %d : ",num);
		//loop will terminate when value of i exceed 32
		for(i = 0 ; i < (sizeof(num) * 8); i++)
		{
			// one by one value of num is AND with value of check
			if( num & check )
				printf("1");
			else
				printf("0");
			//check is right shifting by one 
			check >>= 1;
		}
		printf("\n");

		check = 0x80000000;
		// 1 is added with inverted value of num and stored in b
		b=-num;
		printf("%d : ",b);
		//loop will terminate when value of i exceed 32
		for(i = 0; i < (sizeof(num) * 8); i++)
		{
			// one by one value of b is AND with value of check
			if(b & check)
				printf("1");
			else
				printf("0");
			//b is left shifting by one 
			b <<= 1;
		}
		printf("\n");
		//to get character 
		getchar();
		printf("Do you want to continue ( Press Y/y to continue ) :");
		scanf("%c",&opt);

	}while( opt == 'Y' || opt == 'y' );
	return 0;
}
