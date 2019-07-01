/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Read int n, a, b (0<=a<=b<=31) lsb's of n into i[b:a]
Date :11-may-2019 
 */
#include<stdio.h>
//function define
int set_nbits_from_pos(int n, int l, int a, int b)
{
	int i, m, n1, n2;
	unsigned int mask1,mask2,mask3=80000000;
	m = b - a + 1;
	//1 is shifted by the value of m and then subtract by 1
	mask1 = ( 1 << m ) - 1;
	//bitwise and operation b/w n and mask1 and its result will shifted by m times
	n = (n & mask1)<<(32-m);
    n2=n>>(32-b);
	//mask1 is shifting by m positio toward left and then inverted
	mask1=mask1<<(32-m);
	mask2 = ~ ( mask1 >> (32-b) );
	//bitwise AND operation between mask2 and l
	l = l & mask2;
	//bitwise OR operation between l and n2
	n1 = l | n2;
	mask3 = 0x80000000;
	printf("New value of 'l' \t:");
	for(i = 0; i < 32; i++)
	{
		//bitwise AND operation between mask3 and n1
		if (n1 & mask3 )
			printf("1");
		else
			printf("0");
		//mask3 is shifting towards right by 1 positon.
		mask3 >>= 1;
	}
}

int main()
{
	int n, l, a, b, i, bits;
	char opt;
	do
	{
		unsigned mask = 0x80000000;
		printf("Enter the value of 'n' :");
		scanf("%d",&n);

		printf("Enter the value of 'l' :");
		scanf("%d",&l);

		printf("Enter the value of 'a' :");
		scanf("%d",&a);
		//loop will execute if the user input(a) within a range of 0 to 31
		if(a > 0 && a < 31)
		{
			printf("Enter the value of 'b' :");
			scanf("%d",&b);
			//loop will execute if the user input(b) within a range of 0 to 31
			if(b > 0 && b < 31)
			{
				printf("The binary form of 'n' :");
				//loop with terminate when the value of i becomes 32.
				for(i = 0; i < 32; i++)
				{
					//bitwise and operation between mask and l
					if(n & mask)
						printf("1");
					else
						printf("0");
					//mask is shifting towards right by 1 positon.
					mask >>= 1;
				}
				printf("\n");
				mask = 0x80000000;
				printf("The binary form of 'l' :");
				//loop with terminate when the value of i becomes 32.
				for(i = 0; i < 32; i++)
				{
					//bitwise and operation between mask and l
					if(l & mask)
						printf("1");
					else
						printf("0");
					//mask is shifting towards right by 1 positon.
					mask >>= 1;
				}
			}
		}
		printf("\n");
		//function call
		bits=set_nbits_from_pos(n, l, a, b);
		getchar();
		printf("\n Do you want to continue : ");
		scanf("%c",&opt);
	}
	//if the value of user will be y or Y then loop will execute.
	while(opt == 'y' || opt == 'Y');
	return 0;
}

