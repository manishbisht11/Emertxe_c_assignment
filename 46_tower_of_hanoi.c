/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : 
Date : 
 */
#include<stdio.h>
//function prototype
void tower_of_hanoi( int num, char source, char temp, char dest);
int main()
{
	int num;
	char choice,source='A',temp='B',dest = 'C';
	do
	{
		printf("Enter a number :");
		scanf("%d",&num);
//function call
		tower_of_hanoi(num,source,temp,dest);

		getchar();
		printf("\nDo you want to continue :");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');
	return 0;
}
//function define
void tower_of_hanoi( int num, char source, char temp, char dest)
{
	//condition will be true if value of num equals to 1
	if (num	== 1)
	
	{
		printf("move disk %d from %c to %c\n",num,source,dest);
		return;
	}
	//recursion function
	tower_of_hanoi(num-1,source,dest,temp);

	printf("move disk %d from %c to %c\n",num,source,dest);

	//recursion function
	tower_of_hanoi(num-1,temp,source,dest);
	
}

