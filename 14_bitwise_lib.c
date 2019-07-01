/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Implementation bitwise Functions 
Date : 13-may-2019 
 */

#include<stdio.h>
//globally declare prototype of function
int get_nbits(int num, int n);
int replace_nbits(int num, int n, int val);
int get_nbits_from_pos(int num, int n, int pos);
int replace_nbits_from_pos(int num, int n, int pos, int val);
int toggle_bits_from_pos(int num, int n, int pos);
int print_bits(unsigned num, int n);
void foo( int num, unsigned int mask);
int i;
int main()
{
	int opt, num, n, val, pos, a, b, c, d, e, f, i;
	char choice;

	do
	{
		printf("1.Get Bits \n");
		printf("2.Replace Bits \n");
		printf("3.Get nbits from postion\n");
		printf("4.replace nbits from postion\n");
		printf("5.Toggle bits from position \n");
		printf("6.Print bits\n");
		printf(" Select operation : ");
		scanf("%d",&opt);
		//according to user input go to case
		switch(opt)
		{
			case 1:
				printf("Enter number : ");
				scanf("%d", &num);

				printf("Enter number of bits(n) : ");
				scanf("%d", &n);

				//function call
				a = get_nbits(num, n);
				printf("decimal value is  : %d\n", a);
				break;

			case 2:
				printf("Enter number : ");
				scanf("%d",&num);

				printf("Enter number of bits(n) : ");
				scanf("%d",&n);

				printf("Enter value : ");
				scanf("%d",&val);

				//function call
				b = replace_nbits(num, n, val);
				break;

			case 3:
				printf("Enter number : ");
				scanf("%d",&num);

				printf("Enter number of bits(n) : ");
				scanf("%d",&n);

				printf("Enter position : ");
				scanf("%d",&pos);

				//function call
				c = get_nbits_from_pos(num, n, pos);
				break;

			case 4:
				printf("Enter number : ");
				scanf("%d",&num);

				printf("Enter number of bits(n) : ");
				scanf("%d",&n);

				printf("Enter position : ");
				scanf("%d",&pos);

				printf("Enter value : ");
				scanf("%d",&val);

				//function call
				d = replace_nbits_from_pos(num, n, pos, val);
				break;

			case 5:
				printf("Enter number : ");
				scanf("%d",&num);

				printf("Enter number of bits(n) : ");
				scanf("%d",&n);

				printf("Enter position : ");
				scanf("%d",&pos);

				//function call
				e = toggle_bits_from_pos(num, n, pos);
				break;

			case 6:
				printf("Enter number : ");
				scanf("%d",&num);

				printf("Enter number of bits(n) : ");
				scanf("%d",&n);

				//value of n should be between 0 - 32.
				if(n > 0 && n < 32)
				{
					//function call
					f = print_bits(num, n);
					break;
				}

				//if number will be greater than 32 then condition will true 
				if(n > 32)
				{
					int n=32;
					//function call
					f = print_bits(num, n);
					break;
				}
			default:
				printf("Enter correct option \n");
		}
		getchar();
		printf("Do you want to continue ( Press Y/y to continue ): ");
		scanf("%c",&choice);
	}
	//if the user the input will be Y or y then loop will run otherwise loop will terminate
	while( choice == 'Y' || choice == 'y');
	return 0;
}
//function define
int get_nbits(int num, int n)
{
	int i, a;
	unsigned int mask1 = 0x80000000, mask;
	//1 is shifted by value of n and subtract 1 with the result
	mask = (1 << n) - 1;
	//AND operation between num and mask
	a = num & mask;
	return a;
}
//function define
int replace_nbits(int num, int n, int val)
{
	int i;
	unsigned int mask, mask1 = 0x80000000;
	//1 is shifted by value of n and subtract 1 with the result
	mask = ( 1 << n) - 1;
	//bitwise AND b/w val & mask
	val = (val & mask);
	num = num & ~(mask);
	//bitwise OR b/w val & num
	num = (num | val);
	//function call
	foo( num, mask1);
}
//function defination
int get_nbits_from_pos(int num, int n, int pos)
{
	int i;
	unsigned int mask = 0x80000000;
	printf("%d -- ",num);
	//function call
	foo( num, mask);
	printf("Extracted bits -- ");
	mask = mask >> (mask - pos - 1);
	for(i = 0; i < n; i++)
	{
		if (num & mask)
			printf("1");
		else
			printf("0");
		//mask is shifting towards right by 1 position 
		mask >>= 1;
	}
	printf("\n");
}
//function defination
int replace_nbits_from_pos(int num, int n, int pos, int val)
{
	int i;
	unsigned int mask1 = 0, mask;
	//1 is shifted by the value of n and then subtract by 1
	mask1 = ( 1 << n ) - 1;
	//bitwise AND operation b/w val and mask1
	val = val & mask1;
	// val is  shifting towards left by (value of position-value of num +1)  position.
	val = val << (pos - n + 1);
	// mask1 is shifting towards left by (value of position-value of num +1)  position.
	mask1 = mask1 << ( pos - n + 1);
//	printf("mask %d \n",mask1);
	//bitwise AND operation between num  and inverted mask1
	num=num & ~(mask1);
	//bitwise OR operation between num and val
	num = num | val;
	mask = 0x80000000;
	//function call
	foo( num, mask);
}
int toggle_bits_from_pos(int num, int n, int pos)
{
	int i, s = num;
	unsigned int mask, mask1 = 0x80000000;
	printf("%d -- ",num);
	for(i=0;i<32;i++)
	{
		if(num & mask1)
			printf("1");
		else
			printf("0");
		//mask is shifting towards right by 1 position 
		mask1 >>= 1;
	}
	//1 is shifted by value of n and subtract 1 with the result
	mask = ( 1 << n ) - 1;
	mask = mask << ( pos - n + 1);
	num = num ^ mask;
	printf("\n%d -- ",s);
	mask1 = 0x80000000;
	//function call
	foo( num, mask1);
}
int print_bits(unsigned num, int n)
{
	int i;
	unsigned int mask = 0x80000000;
	//mask is shifted to right by result of subtracted value of mask to n 
	mask = mask >> ( mask - n );
	for( i = 0; i < n; i++)
	{
		if(num & mask)
			printf("1");
		else
			printf("0");
		//mask is shifting towards right by 1 position 
		mask >>= 1;
	}
	printf("\n");
}
void foo( int num, unsigned int mask)
{
	for(i = 0; i < 32; i++)
	{
		if ( num & mask )
			printf("1");
		else
			printf("0");
		//mask is shifting towards right by 1 position 
		mask >>= 1;
	}
	printf("\n");
}
