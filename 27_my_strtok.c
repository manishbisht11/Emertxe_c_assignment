/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : 
Date : 
 */
#include<stdio.h>
#include<stdlib.h>
void my_strtok( char *str1, char *str2);

int main()
{
	char choice;
	do
	{
		char str1[100],str2[50];
		printf("Enter string 1 : ");
		scanf("%[^\n]",str1);
		getchar();
		printf("Enter a string 2 : ");
		scanf("%[^\n]",str2);
		getchar();
		//function call
		my_strtok(str1,str2);
		printf("\nDo you want to continue :");
		scanf("%c",&choice);
		getchar();
	}while(choice == 'y' || choice == 'Y');
	return 0;
}

void my_strtok( char *str1, char *str2)
{
	int i=0,j=0;
	while(*(str1+i) != '\0')
	{
		while(*(str2+j) != '\0')
		{
			if(*(str1+i)==*(str2+j) && *(str2+j) != '\0' )
			{
				*(str1+i)=' ';	
				++j;
			}
			else
			{
				++j;

			}
		}

		j=0;
		++i;
	}

i=0;
	while(*(str1+i) != '\0')
	{
		if(*(str1+i) == ' ')
		{
		printf("\n");
		while(*(str1+i) == ' ')
			++i;
		}
		printf("%c",*(str1+i));
	
		++i;
	}
}
