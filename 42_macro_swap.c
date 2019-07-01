/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : macro swap 
Date : 
 */
#include<stdio.h>
//macro defined.. t is the datatype which is passed from call.
#define swap(num1,num2,t)\
{\
	t temp = num1;\
	num1=num2;\
	num2 =temp;\
}\

int main()
{
	char choice,a,b;
	int num1,num2,opt;
	do
	{
		printf("1-Int\n");
		printf("2-Char\n");
		printf("3-Float\n");
		printf("4-Double\n");
		printf("Enter your choice : ");
		scanf("%d",&opt);
		//according to the value of option, jumps in the loop
		switch(opt)
		{
			case 1:
				printf("Enter first number : ");
				scanf("%d",&num1);
				printf("Enter second number : ");
				scanf("%d",&num2);
				//macro call
				swap(num1,num2,int);
				printf("After swap\nnum1 : %d \nnum2 : %d\n ",num1,num2);
				break;
			case 2:
				getchar();
				printf("Enter first char : ");
				scanf("%c",&a);
				getchar();
				printf("Enter second char : ");
				scanf("%c",&b);
				//macro call
				swap(a,b,char);
				printf("After swap\nChar1 : %c \nChar2 : %c\n ",a,b);
				break;
			case 3:
				{
				float num1,num2;
				printf("Enter first number : ");
				scanf("%f",&num1);
				printf("Enter second number : ");
				scanf("%f",&num2);
				//macro call
				swap(num1,num2,float);
				printf("After swap\nnum1 : %.2f \nnum2 : %.2f\n ",num1,num2);
				break;
				}
			case 4:
				{
				double num1,num2;
				printf("Enter first number : ");
				scanf("%lf",&num1);
				printf("Enter second number : ");
				scanf("%lf",&num2);
				//macro call
				swap(num1,num2,double);
				printf("After swap\nnum1 : %.2lf \nnum2 : %.2lf\n ",num1,num2);
				break;
				}
			default :
				printf("Enter a valid number");
		}
		getchar();
		printf("Do you want to continue :");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');
	return 0;
}

