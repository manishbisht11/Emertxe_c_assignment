/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Circular right and left shift the int by n  
Date : 12-may-2019
 */
#include<stdio.h>
//globally prototype of function
int right_shift(int num, unsigned int n);
int left_shift(int num, unsigned int n);
int foo( int num ,int mask);
int i;
int main()
{
	int num, opt;
	unsigned int n;
	int r_s, l_s;
	char choice;

	do 
	{
		printf("Enter the number :");
		scanf("%d", &num);
		printf("Enter n(shift) :");
		scanf("%d", &n);
		printf("possible operations \n");
		printf("1.Circular right shift \n");
		printf("2.Circular left shift \n");

		printf("Enter your choice : ");
		scanf("%d", &opt);
		//according to the value of user input jump to case
		switch(opt)
		{
			case 1:
				//function call
				r_s = right_shift( num, n );
				break;
			case 2:
				//function call
				l_s = left_shift( num, n );
				break;
			default:
				printf("Enter correct choice");
		}
		getchar();
		printf("Do you want to continue ( Press Y/y to continue ) : ");
		scanf("%c", &choice);
	}
	//again loop will terminate if user give i/p (Y or y)
	while( choice == 'Y' || choice == 'y');
	return 0;
}
//function define
int right_shift(int num, unsigned int n)
{
	int a, b;
	unsigned int mask = 0x80000000;
	printf(" %d --",num);
	//function_call
	foo(num ,mask);
	printf("\n");	
	printf("after shift -- ");	
	//num will shift right n times towards right or num shift left (32-n) times
	num=(( num>>n ) | ( num<<(32-n) )) ;
	mask = 0x80000000;
	for(i = 0; i < 32; i++)
	{
		//bitwise and b/w num and mask
		if( num & mask )
			printf("1");
		else
			printf("0");
		//mask will shift 1 time towards right
		mask >>= 1;
	}
	printf("\n");
}
//function define
int left_shift(int num, unsigned int n)
{
	int a, b;
	unsigned int mask = 0x80000000;
	printf(" %d --",num);
	//function_call
	foo(num ,mask);
	printf("\n");	
	printf("after shift -- ");	
	mask = 0x80000000;
	//num will shift left n times towards right or num shift right (32-n) times
	num=(( num << n) | ( num >> (32-n) )) ;
	for(i = 0; i < 32; i++)
	{
		//bitwise and b/w num and mask
		if( num & mask )
			printf("1");
		else
			printf("0");
		//mask will shift 1 time towards right
		mask >>= 1;
	}
	printf("\n");
}

int foo( int num ,int mask)
{
	for( i = 0; i < 32; i++)
	{
		//bitwise and b/w num and mask
		if ( num & mask )
			printf("1");
		else
			printf("0");
		//mask will shift right by 1 position 
		mask >>= 1;
	}
}
