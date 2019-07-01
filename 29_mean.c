/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : variance 
Date : 10-6-2019
 */
#include<stdio.h>
#include <stdlib.h>
//function prototype
void variance(int *arr, int lim);
void foo( int *arr, int *arr1, int *arr2, int lim,int option);
int i, lim;
int main()
{
	int opt;
	char choice;
	do
	{
		printf("1.Static Array\n");
		printf("2.Dynamic Array\n");
		printf("Enter your choice : ");
		scanf("%d",&opt);
		//accoding to value of opt jumps to case
		switch (opt)
		{
			case 1 :
				{
					printf("Enter your limit of array : ");
					scanf("%d",&lim);
					int arr[lim];
					printf("Enter array elements\n");
					//function call
					variance(arr,lim);
					break;
				}

			case 2:
				{
					printf("Enter your limit of array : ");
					scanf("%d",&lim);
					int (*x)[lim];
					//dynamic memory allocation
					x = malloc(sizeof(int) * lim);
					printf("Enter array elements\n");
					//function call
					variance(&x,lim);
					break;
				}
			default :
				printf("Enter valid number \n");
		}
		getchar();
		printf("Do you want to continue (press y/y to continue) :");
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
	return 0;
}
//function define
void variance(int *arr, int lim)
{
	int option;;
	float var;
	int temp, j, arr1[lim], arr2[lim];
	//loop will run till the value of lim
	for(i = 0; i < lim; i++)
	{
		printf("[%d] - ",i);
		scanf("%d",&arr[i]);
	}
	//loop will run till the value of lim
	for( i = 0; i < lim; i++ )
	{
	//loop will run till the value of lim
		for( j = 0; j < lim; j++)
		{
			//if arr[i] will be less than arr[j]
			if ( arr[i] < arr[j] )
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//if lim is divided by 2 and remainder will be 1 the condition will be true
	if(lim % 2 == 1)
	{
		option = 1;
		foo( arr, arr1, arr2,lim,option);
	}
	else
	{
		option = 0;
		foo( arr, arr1, arr2,lim,option);
	}
}

void foo( int *arr, int *arr1, int *arr2, int lim, int option)
{
	int sum = 0, sum1 = 0, a, b, val;
	float var;
	if (option == 1)
	{
		a = ( lim / 2 );
	//loop will run till the value of lim
		for(i = 0; i < lim; i++)
		{
			arr1[i] = arr[i] - arr[a];
			arr2[i] = (arr1[i] * arr1[i]);
		}
	}
	else
	{
		b = (lim / 2) - 1;
	//loop will run till the value of lim
		for(i = 0; i < lim; i++)
		{
			arr1[i] = arr[i] - arr[b];
			arr2[i] = (arr1[i] * arr1[i]);
		}

	}

	//loop will run till the value of lim
	for(i = 0;i < lim; i++)
	{
		sum = sum + arr[i];
		sum1 = sum1 + arr2[i];
	}
	printf(" x\tD=x-mean\tD^2\n");
	//loop will run till the value of lim
	for(i = 0; i < lim; i++)
	{
		printf("%3d\t",arr[i]);
		printf("% 3d\t\t",arr1[i]);
		printf("%3d \n",arr2[i]);
	}
	printf("---------------------------\n");
	printf(" %d %23d\n",sum,sum1);
	printf("---------------------------\n");

	var=(float)sum1 / lim;
	printf(" The Variance of the entered numbers is : %.2f\n",var);
}
