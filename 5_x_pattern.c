/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : x-pattern
date : 
 */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int num,i,j;
	char choice;
	do 
	{
		printf("Enter the number of lines : ");
		scanf("%d",&num);
//if user input will be in range 0 to 32 then condition will be true
		if (num > pow(2,5) || num < 0 )
		{
			printf("Enter a number between 1 to32 \n");
		goto A;
		}
		else
		{
			//loop will run till the value of num
			for(i=0;i<num;i++)
			{
			//loop will run till the value of num
				for(j=0;j<num;j++)
				{
					if (i==j || j == (num-i-1))
					{
						printf("Hello");
					}
					else
					{
						printf(" ");
						if (num %2 == 1 && j == num/2)
						printf(" ");
					}
					if (i==j && j == (num-i-1))
						printf("Hello");
				}
				printf("\n");
			}
		}

A:
		getchar();
		printf("Do you want to continue :");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');

	return 0;
}
