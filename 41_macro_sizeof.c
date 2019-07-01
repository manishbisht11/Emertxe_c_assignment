/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : macro sizeof without 
Date : 
 */
#include<stdio.h>
//macro defined.. t is the datatype which is passed from call.
#define size_of(x) ((char*) (x+1) - (char*) x )

int main()
{
	char choice;
	int opt;
	do
	{
		printf("1-Int\n2-Char\n3-Float\n4-Double\nEnter your choice : ");
		scanf("%d",&opt);
		//according to the value of option, jumps in the loop
		switch(opt)
		{
			case 1:
				{
					int a;
					printf("Size of integer is: %ld",size_of(&a));
					break;
				}
			case 2:
				{
					char a;
					printf("Size of character is: %ld ",size_of(&a));
					break;
				}
			case 3:
				{
					float a;
					printf("Size of float is: %ld ",size_of(&a));
					break;
				}
			case 4:
				{
					double a;
					printf("Size of double is: %ld ",size_of(&a));
					break;	
				}
			default :
				printf("Enter a valid number");
		}
		getchar();
		printf("\nDo you want to continue :");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');
	return 0;
}

