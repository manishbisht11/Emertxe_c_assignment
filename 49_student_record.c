/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : student record 
Date : 10-06-2019
 */
#include<stdio.h>
#include<stdlib.h>
//stucture define
typedef struct student
{
	char name[10];
	char sub[10];
}student;

//function define
void  data(student *s,int num,int sub)
{
	int i,j;
	//loop will run till the value of num
	for (i = 0; i < num; i++)
	{
		printf("Enter the %d student name : ",(i+1));
		scanf("%s",s[i].name);
		//loop will run till the value of sub
		for(j=0;j<sub;j++)
		{
A1 :
			printf("%d subject marks : ",j+1);
			scanf("%d",(int *)&s[i].sub[j]);
			if(s[i].sub[j] > 100 )
			{
				printf("Entered number is greater than 100. Enter correct number\n");
				goto A1;

			}
		}
	}
}

//function define
void pattern(int sub)
{
	int i;
	for(i=0;i<(3+sub);i++)
	{
		printf("--------");
	}
	printf("\n");
}

int main()
{
	int num,i,j,sub,av=0;
	printf("Enter the number of student : ");
	scanf("%d",&num);
	printf("Enter the number of subjects : ");
	scanf("%d",&sub);
	student s[num];
	//fuction call
	data(s,num,sub);

	//pattern function call
	pattern(sub);
	printf("S.No\tName\t");
	for(i=0;i<sub;i++)
		printf("sub%d\t",i+1);
	printf("Average\n");
	//pattern function call
	pattern(sub);

	//loop will run till the value of num
	for(i=0;i<num;i++)
	{
		printf("%d\t",i+1);
		printf("%-8.6s",s[i].name);
		//loop will run till the value of sub
		for(j=0;j<sub;j++)
		{
			printf(" %3d\t",s[i].sub[j]);
		}
		//loop will run till the value of sub
		for(j=0;j<sub;j++)
		{
			av=av+s[i].sub[j];
		}
		printf("%7.1f\n",((float)av/sub));
		av=0;
	}
	//pattern function call
	pattern(sub);
	return 0;
}
