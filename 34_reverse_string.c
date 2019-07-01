/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Reverse string
Date : 20-5-2019
 */
#include<stdio.h>
#include<string.h>
//functon prototype
char revstr(char *str, int l);
int main()
{
	char str[100], l, choice;
	int opt;
	do
	{
		printf("1.Recursive Method \n");
		printf("2.Non-recursive Method \n");
		printf("Enter your choice : " );
		scanf("%d",&opt);
		getchar();
		//according to option jumps in the case
		switch(opt)
		{
			case 1:
				printf("Enter a string : ");
				fgets(str,100,stdin);
				//length of string is stored in l.
				l = strlen(str);
				//function call
				revstr(str, l);
				break;

			case 2:
				printf("Enter a string : ");
				scanf("%[^\n]",str);
				//length of string is stored in l.
				l = strlen(str);
				//function call
				non_revstr(str,l);
				break;

			default:
				printf("Invalid input \n");	
		}
		getchar();
		printf("Do you want to continue : ");
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
	return 0;
}
//function define
char revstr(char *str, int l)
{
	static int i = 0;
	//condition will be true value of l times
	if(l)
	{
		printf("%c",*( str + l - 1));
		l = l - 1;
		//calling function
		revstr(str, l);
	}
	else
	{
		return 1;
	}
}
//function define
void non_revstr( char *str, int l)
{
	char temp;
	int i;
	//condition will be true value of l times
	for (i = strlen(str) - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
}

