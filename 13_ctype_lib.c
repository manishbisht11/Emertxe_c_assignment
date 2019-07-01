/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : 
Date : 15-may-2019
 */
#include<stdio.h>
//globally declared prototype of a function
int is_alnum(unsigned char num);
int is_alpha(unsigned char num);
int is_ascii(unsigned char num);
int is_blank(unsigned char num);
int main()
{
	int num1, a, b, c, d;
	char choice;
	unsigned char num;
	do
	{
		printf("Enter the character : ");
		scanf("%c", &num);
		getchar();
		printf("1.isalpha \n");
		printf("2.isalnum \n");
		printf("3.isascii \n");
		printf("4.isblank \n");

		printf("Enter your choice : ");
		scanf("%d",&num1);
		getchar();
		//according to user input go to the case.
		switch( num1 )
		{

			case 1:
				{
				//function call
				b = is_alpha(num);
				if ( b == 0 )
				{
					printf("character is alpha char");
				}
				else
				{
					printf("character is not alpha char");
				}
				}
				break;

			case 2:
				{
				//function call
				a = is_alnum(num);
				if ( a == 0 )
				{
					printf(" char is alphanumeric char");
				}
				else
				{
					printf("char is not alphanumeric char");
				}
				}
				break;

			case 3:
				{
					//function call
				c = is_ascii(num);
				if ( c == 0 )
				{
					printf("char is ascii char");
				}
				else
				{
					printf("char is not ascii char");
				}
				}
				break;

			case 4:
				{
					//function call
				d = is_blank(num);
				if( d == 0 )
				{
					printf(" char is blank");
				}
				else
				{
					printf("char is not blank");
				}
				}
				break;

			default :
				printf("Enter correct option");

		}
		printf("\n");
		printf("Do you want to continue (press Y/y to continue ) :");
		scanf("%c", &choice);
		getchar();
	}
	//If user enter Y or y, again loop will run
	while( choice == 'Y' || choice == 'y' );
	return 0;
}
//function define
int is_blank(unsigned char num)
{
	//the ascii value of space is 32, if user input will be space than condition will be true.

	if ( num == 32 )
		// condiion is true it will go agin to the function.
		return 0;
	else
		return 1;
}

//function define
int is_alnum(unsigned char num)
{
	//alnum includes all the alphabets(upper and lower) and digits
	// if your will enter any digit or alphabets,condition will be true
	if(( num >= 'A' && num <= 'Z') || (num >= 'a' && num <= 'z') || (num >= '0' && num <= '9'))
	{		//condiion is true it will go agin to the function.
		return 0;
	}
	else
	{
	return 1;
	}
}

//function define
int is_ascii( unsigned char num)
{
	//In ascii number we have all the digits,alphabets,special unsigned characters.
	if( num >= 32 && num <= 127 )
	{
		//condiion is true it will go agin to the function.
		return 0;
	}
	else
	{
	return 1;
	}
}

//function define
int is_alpha( unsigned char num)
{
//alpha includes all the alphabets(upper and lower).
		// if your will enter any alphabets,condition will be true
	if(( num >= 'a' && num <= 'z' ) || ( num >= 'A' && num <= 'Z' ))
	{
		// condiion is true it will go agin to the function.
		return 0;
	}
	return 1;
}
