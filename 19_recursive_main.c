/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : finding factorial using recursion
Date : 22-may-2019
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{ 
	int a,res=1;
	static int i=0,num;

	if ( i== 0)
	{	
		printf("Enter a number : ");
		scanf("%d",&num);
		//if value of num will be less than 0 condition is true


		if ( num <= 0)
		{
			printf("Invalid input \n");
			exit(0);	
		}
		i++;
	}
	if(num == 0)
	{
		return 1;

	}

	//function call
	while(num != 0)
	{
		res= res*num;
		num-=1;
	}
	main();
	printf("Factorial is %d \n",res);

	return 0;
}

