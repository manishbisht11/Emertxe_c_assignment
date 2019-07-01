/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Squeeze the name 
Date : 5-6-2019
 */
#include<stdio.h>
#include<string.h>
//fuction Prototype
void squeeze(char *str1, char *str2);
int main()
{
	char str1[100], str2[50], a, choice;
	do 
	{
		printf("Enter string 1 :");
		scanf("%[^\n]",str1);
		getchar();
		printf("Enter string 2 :");
		scanf("%[^\n]",str2);
		squeeze(str1, str2);
		getchar();
		printf("\n");
		printf("Do you want to continue :");
		scanf("%c",&choice);
		getchar();
	}while(choice == 'y' || choice == 'Y');

}
//function define
void squeeze(char *str1, char *str2)
{
	int l1, l2, i, j, k=0;;
	char str3[100];
	//length of str1 is stored in l1
	l1 = strlen(str1);
	//length of str2 is stored in l2
	l2 = strlen(str2);
//loop will run value of l1 times 
	for(i = 0; i < l1;i++)
	{
		int count = 0;
//loop will run value of l2 times 
		for(j = 0; j < l2;j++)
		{
			if (*(str1 + i) == *(str2 + j) )
			{
				count++;
			}
		}
		if(count == 0)
		{
			*(str3 + k)=*(str1 + i);
			k++;
		}
		else
		{
			continue;
		}
	}
	*(str3 + k)='\0';
	printf("squeeze string : %s",str3);
}
