/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : sieve 
Date : 14-6-2019
 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char choice;
	do
	{
	int num,i,j=0;
		printf("Enter a number : ");
		scanf("%d",&num);
		//dynamic memory allocation
		int *arr=malloc(sizeof(int)*num);
		//int arr[num];
		//loop will run the value of num
		for( i = 0; i <= num; i++)
		{
			//if i will be greater than 2 condition will be true
			if(i >= 2)
			{
				arr[j] = i;
				j++;
			}
		}

		//loop will run the value of num
		for(i = 0; i < num; i++)
		{
			//conditio will be true if value of arr[i] is not 0
			if(arr[i] != 0)
			{
				for(j = ( i + 1 ); j < num; j++)
				{
					if (arr[j] % arr[i] == 0)
						arr[j] = 0;
				}
			}
		}
		printf("Prime numbers are : ");
		//loop will run the value of num
		for(i = 0; i < num-1; i++)
		{
			//conditio will be true if value of arr[i] is not 0
			if(arr[i] != 0)
			{
				printf("%d ",arr[i]);
			}
		}
		//dynamic memory will be free 
		free(arr);
		getchar();
		printf("\nDo you want to continue :");
		scanf("%c",&choice);

	}while(choice == 'y' || choice == 'Y');
	return 0;
}

