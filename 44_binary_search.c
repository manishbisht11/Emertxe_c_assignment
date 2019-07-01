/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : sorting 
Date : 11-6-2019
 */
#include<stdio.h>
int i,j,temp;
int main()
{
	char choice;
	int opt,num;
	do
	{
		printf("1.Int\n2.Char\n3.Float\n4.Double\n5.String\nEnter your choice : ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				{
					int arr[4];
					void *ptr=arr;
					printf("Enter 4 element of type int\n");
					for(i=0;i<4;i++)
					{
						printf("[%d] - ",i);
						scanf("%d",ptr);
						++ptr;
					}
					for(i=0;i<4;i++)
					{
						printf("%d \n",*(int *)ptr);
						++ptr;
					}

				/*	for(i=0;i<4;i++)
					{
						for(j=0;j<4;j++)
						{
							if(*(ptr+i) < *(ptr+j))
							{
								temp = *(ptr+i);
								*(ptr+i) = *(ptr+j);
								*(ptr+j) = temp;
							}
						}
					}
					printf("sorted array is :");
					for(i=0;i<4;i++)
					{
						printf("%d ",*ptr);
						++ptr;
					}*/

printf("Enter the key element to search : " );
scanf("%d",&num);
				}


		}





		printf("\n");
		getchar();
		printf("Do you want to continue :");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');
	return 0;
}

