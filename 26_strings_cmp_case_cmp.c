/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : creating a function for strcmp and strcasecmp
Date : 30-5-2019 
 */
#include<stdio.h>
#include <ctype.h>
#include<string.h>
//function prototype
int my_strcmp(char *str1, char *str2, int choice);
int main()
{
	char str1[100];
	char str2[100], opt;
	int choice;
	do
	{

		printf("1.String Compare \n");
		printf("2.String Case Compare \n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		getchar();
		switch(choice)
		{
			case 1:
				printf("Enter string 1 :");
				scanf("%[^\n]",str1);
				getchar();
				printf("Enter string 2 :");
				scanf("%[^\n]",str2);
				//function call
				my_strcmp(str1, str2, choice);

				break;
			case 2:
				printf("Enter string 1 :");
				scanf("%[^\n]",str1);
				getchar();
				printf("Enter string 2 :");
				scanf("%[^\n]",str2);
				//function call
				my_strcmp(str1, str2, choice);
				break;
			default:
				printf("Enter a valid number");

		}
		getchar();
		printf("Do you want to continue (press Y or y to continue) :");
		scanf("%c",&opt);

	}while(opt == 'y' || opt == 'Y');
	return 0;
}
//function define
int my_strcmp(char *str1, char *str2, int choice)
{
	int len, b, count = 0;
	len = strlen(str1);
	//loop will run till null comes;
	while(*str1 != '\0')
	{
		//condition only true when vlaue of choice will be 1
		if(choice == 1)
		{
			//conditon will be true if the content of str1 and str2 equals 
			if (*str1 == *str2)
				//count is incremented by 1
				count++;
			else
			{
				printf("Strings are not same \n");
				return 0;
			}
			//str1 is incremented by 1
			*str1++;
			//str2 is incremented by 1
			*str2++;
		}
		else
		{
			//first converting then content of str1 & str2 into uppercase and then comparing.
			if (toupper(*str1) == toupper(*str2))
				//count is incremented by 1
				count++;
			else
			{
				printf("Strings are not same \n");
				return 0;
			}
			//str1 is incremented by 1
			*str1++;
			//str2 is incremented by 1
			*str2++;
		}
	}
	if (count == len)
		printf("Strings are same\n");
}

