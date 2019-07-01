/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : print float into ieee 32 bit and 64 bit. 
Date : 22-05-2019
 */
#include<stdio.h>
//function prototype
void bits_32(int *num);
void bits_64(long int *num1);
int main()
{

	int choice;
	char opt;
	float num,a;
	double num1;
	do 
	{
		printf("1.float \n");
		printf("2.double \n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		getchar();
		switch(choice)
		{
			case 1:
				printf("Enter any decimal number : ");
				scanf("%f",&num);
				getchar();
				printf("S.bit\tExponent\tMantissa\n");
				//function call
				bits_32((int *)&num);
				break;
/*			case 2:
				printf("Enter any decimal number : ");
				scanf("%lf",&num1);
				getchar();
				printf("S.bit\tExponent\tMantissa\n");
				//function call
				bits_64((long int*) &num1);
				break;*/
			default:
				printf("Enter valid number");
		}
		printf("\n\n");
		printf("Do you want to continue ( press Y/y to continue ) : ");
		scanf("%c",&opt);
	}while( opt == 'Y' || opt == 'y');

	return 0;
}
//unction define
void bits_32(int* num)
{
//	printf("num = %f\n", *num);
	
	unsigned int mask=(1<< (((sizeof(*num))*8) - 1));
	int count=0;
	//if count is not equal to 0 then condition will be true
	while(mask != 0)
	{
		//for blank space
		if (count == 1 || count == 9)
		{

			printf("\t");
		}

		(mask & *num) != 0 ? printf("1") : printf("0");

		++count;
		//mask is shifted to left by one position
		mask>>=1;
	}
}

void bits_64(long int* num1)
{
	unsigned long int mask=(1ul << (((sizeof(*num1))*8) - 1));
	int count=0;
	//if count is not equal to 0 then condition will be true
	while(mask != 0)
	{
		//for blank space
		if (count == 1 || count == 12)
		{
			printf("\t");
		}

		(mask & *num1) != 0 ? printf("1") : printf("0");

		++count;
		//mask is shifted to left by one position
		mask>>=1;
	}
}



