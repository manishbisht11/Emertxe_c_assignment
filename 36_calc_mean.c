/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : calculate mean of all data types 
Date : 6-11-2019
 */
#include<stdio.h>
#include<stdlib.h>
//function prototype
void calc_mean(const void *arr, int lim, int opt);
int i;
int main(  int argc, char *argv[])
{
	int opt,lim=atoi(argv[1]);
	void* arr;
	char choice;
	do
	{
		printf("1.Int\n2.Short\n3.Float\n4.Double\nEnter your choice :");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				//dynamic memory alloction
				arr=malloc(lim*sizeof(int));
				for(i=0; i<lim;i++)
				{
					printf("%d : ",i+1);
					scanf("%d",(int *)arr+i);	
				}
				//function call
				calc_mean(arr,lim,opt);
				break;
			case 2:
				//dynamic memory alloction
				arr=malloc(lim*sizeof(short));
				for(i=0; i<lim;i++)
				{
					printf("%d : ",i+1);
					scanf("%hd",(short *)arr+i);	
				}

				//function call
				calc_mean(arr,lim,opt);
				break;
			case 3:
				//dynamic memory alloction
				arr=malloc(lim*sizeof(float));
				for(i=0; i<lim;i++)
				{
					printf("%d : ",i+1);
					scanf("%f",(float *)arr+i);	
				}

				//function call
				calc_mean(arr,lim,opt);
				break;
			case 4:
				//dynamic memory alloction
				arr=malloc(lim*sizeof(double));
				for(i=0; i<lim;i++)
				{
					printf("%d : ",i+1);
					scanf("%lf",(double *)arr+i);	
				}

				//function call
				calc_mean(arr,lim,opt);
				break;
			default :
				printf("Enter a valid number\n");	

		}
		getchar();
		printf("\nDo you want to continue (press Y/y to continue):");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');

	return 0;
}
//function define
void calc_mean(const void *arr, int lim, int opt)
{
	switch(opt)
	{
		case 1:
			{
				int sum=0;
				for(i=0; i<lim;i++)
				{
					sum=sum + (*((int *)arr+i));
				}
				printf("\nmean is : %d",(sum/lim));
				break;
			}
		case 2:
			{
				short sum=0;
				for(i=0; i<lim;i++)
				{
					sum=sum + (*((short *)arr+i));
				}
				printf("\nmean is : %d",(sum/lim));
				break;
			}
		case 3:
			{
				float sum=0;
				for(i=0; i<lim;i++)
				{
					sum=sum+(*((float *)arr+i));
				}
				printf("\nmean is : %.2f",(sum/lim));
				break;
			}
		case 4:
			{
				double sum=0;
				for(i=0; i<lim;i++)
				{
					sum=sum + (*((double *)arr+i));
				}
				printf("\nmean is : %.2lf",(sum/lim));
				break;
			}
	}
}
