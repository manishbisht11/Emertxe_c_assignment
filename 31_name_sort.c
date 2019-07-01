/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Sort and print the names 
Date : 11-6-2019
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//function prototype
void sort(char (*)[32], int lim);
	int i,j;
	char choice;
int main()
{
	do
	{
	int lim;
	printf("How many names you want to enter : ");
	scanf("%d",&lim);
	char str[lim][32];
	//loop will terminate when i reach to lim value
	for(i=0;i<lim;i++)
	{
		printf("[%d] ",i);
		scanf("%s", str[i]);
	}
	//fuction call
	sort(str,lim);
	printf("After sorting the names \n");	
		for(i=0;i<lim;i++)
		{
			printf("[%d] %s\n",i,str[i]);
		}
		printf(" \n");
getchar();
printf("Do you want to continue :");
scanf("%c",&choice);
}while(choice == 'y' || choice == 'Y');
	return 0;
}
//function define
void sort(char (*str)[32], int lim)
{
	char temp[32];
	int cmp;
	//loop will terminate when i reach to lim value
	for(i=0;i<lim;i++)
	{
	//loop will terminate when i reach to lim value
		for(j=0;j<lim-i;j++)
		{
			//compare string j and (j+1)
			cmp = strcmp(str[j],str[j+1]);
			if(cmp > 0)
			{
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}

		}
	}

}
