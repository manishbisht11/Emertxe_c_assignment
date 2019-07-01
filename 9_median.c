/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : median of two array
Date : 9-may-2019
 */
#include<stdio.h>
int main()
{
	int s, i, j, count, t, count1=2;
	float Median, med=0;
	char option;

	do
	{
		count = count1;
		while( count >=1 )
		{
			printf("Enter size :");
			//asking for size of array
			scanf("%d", &s);
			int arr[s];

			printf("Enter array elements :");
			//loop wil terminate when the value of i equals to size if array
			for( i = 0; i < s; i++)
			{
				scanf("%d", &arr[i]);
			}

			//Sorting of array
			for( i = 0; i < s; i++)
			{
				for( j = (i+1); j < s; j++)
				{
					if (arr[i] > arr[j])
					{
						t = arr[i];
						arr[i] = arr[j];
						arr[j] = t;
					}	
				}
			}
			//printing th sorted array
			printf("Sorting Array : ");
			for( i = 0; i < s; i++)
			{
				printf("%d ",arr[i]);
			}
			printf("\n");
			//here i is the total elements in an array & we are finding te median of array
			Median = (arr[ (i-1) / 2 ] + arr[i / 2]) / 2.0;
		//		printf("Median of Array is : %.2f \n",Median);
			med = med + Median;
			count--;
		}
		//value of median is divided by count
		med = med / count1;
		printf("Median of arrays is : %.2f",med);

		printf("\n");
		getchar();
		printf("Do you want to continue ( Press Y/y to continue) :");
		scanf("%c",&option);
	}while( option == 'Y' || option == 'y');
	return 0;
}
