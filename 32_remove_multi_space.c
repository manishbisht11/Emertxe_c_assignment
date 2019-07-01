/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : squeeze multi spaces into single in a string
Date : 
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//function prototype
char multi_space(const char *str);
int main()
{
	int l;
	char str[50], choice;
	do
	{
		printf("Enter a string : ");
		scanf("%[^\n]",str);
		//	fgets(str,50,stdin);
		//function call
		multi_space(str);
		getchar();
		printf("\nDo you want to continue :");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');

}
//function define
char multi_space( const char *str)
{
#if 1
	int l, i= 0;
	char *str2 = (char *) malloc(50);
	printf("str2:");
	//condition will be false when null comes 
	while ( *str != '\0')
	{
		//if the value of str is space then condition will be true
		if (*str == ' ')
		{
			//store blank in str2
			str2[i] = ' ';
			//if consicutive
			while( *++str == ' ');
			i++;
		}
		str2[i] =*str;
		printf("%c",str2[i]);
		*str++;
		i++;
	}
	//str2 = '\0';
	l=strlen(str2);
	printf("\n l =%d",l);
	printf("\nstr2 = %s",str2);
#else

	int i = 0;
	//loop will run till the length of string
	while (i<strlen(str))
	{
		//condition will be true if string have a space
		if (*(str + i) == ' ')
		{
			printf(" ");
			//if string have many spaces then loop will run;
			while ( *(str + i)  == ' ')
			{
				i++;
			}
		}
		//printing string character by character
		printf("%c",str[i]);
		i++;
	}


#endif
}
