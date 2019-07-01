/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title :  float array sorting
Date : 5-6-2019
 */
#include<stdio.h>
//function prototype
void sort(float *arr, int s);
int i;
int main()
{
	int s;
	char choice;
	do
	{
		printf("Enter the count of float elements need to store : ");
		scanf("%d",&s);
		float arr[s];
		printf("Enter the elements\n");
		//loop run till the value of s
		for(i=0;i<s;i++)
		{
			printf("%d-",(i+1));
			scanf("%f",&arr[i]);
		}
		//function call
		sort(arr,s);
		getchar();
		printf("Do you want to continue :");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');
	return 0;
}
//function define
void sort(float *arr, int s)
{
	int j;
	float temp;

	//loop run till the value of s
	for(i = 0; i < s; i++)
	{
		//loop run till the value of s
		for(j = 0; j < s; j++)
		{
			//if the value of (arr+ i) will b less then condition will be true
			if (*(arr + i) < *(arr + j))
			{
				temp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	}
	//loop run till the value of s
	for(i = 0; i < s; i++)
	{
		printf("[%d] - %.2f \n",i,*(arr+i));
	}
}
