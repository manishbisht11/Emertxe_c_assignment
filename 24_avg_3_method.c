/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : find average in 3 Different ways 
Date : 11-6-2019
 */
#include <stdlib.h>
#include<stdio.h>
int i;
int main(int argc, char *argv[])
{
	int opt, lim;
	char choice;
	do
	{
		int sum =0;
		printf("Select the method to calculate the average\n");
		printf("1.Scan from keyboard\n");
		printf("2.Command line argument\n");
		printf("Enter your choice : ");
		scanf("%d",&opt);
		//according to opt will jump to the case
		switch(opt)
		{
			case 1 :
				{
					printf("Enter the number of elements : ");
					scanf("%d",&lim);
					int arr[lim];
					//loop will terminate when i exceed lim value
					for(i = 0; i < lim; i++)
					{
						printf("[%d] - ",i);
						scanf("%d",&arr[i]);
					}
					//loop will terminate when i exceed lim value
					for(i = 0; i < lim; i++)
					{
						//addiing all elements of array
						sum = sum + arr[i];
					}
					printf("Average is : %.2f",((float)sum/lim));	
					break;
				}

			case 2 :
				{
					//loop will terminate when i exceed number of argument
					for(i = 1; i < argc; i++)
					{
						//adding all arguments and storing in sum
						sum = sum + atoi(argv[i]);
					}
					printf("Average is : %.2f",((float)sum/(argc-1)));	
					break;	
				}
		}

		getchar();
		printf("\n");
		printf("Do you want to continue :");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');

	return 0;
}
