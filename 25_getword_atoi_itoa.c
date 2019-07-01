/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : getword, atoi,and itoa 
Date : 5-6-2019
 */


#include<stdio.h>
#include<string.h>
//function prototype
int my_getword( char *str);
int my_atoi( char *str);
int  my_itoa( int num, char *str);
int main()
{
	char choice, str[50];
	int opt, a,num;

	do{
		printf("1.getword\n2.atoi\n3.itoa \nEnter your option : ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("Enter a word : ");
				getchar();
				scanf("%[^\n]",str);
				//function call
				a=my_getword(str);
				printf("Number of characters are : %d\n",a);
				break;
			case 2:
				printf("Enter a numeric string : ");
				getchar();
				scanf("%[^\n]",str);
				//function call
				a=my_atoi(str);
				printf("%d\n",a);
				break;
			case 3:
				printf("Enter a numeric string : ");
				getchar();
				scanf("%d",&num);
				//function call
				my_itoa(num, str);
				break;
			default:
				printf("Enter a valid number");
		}
		printf("Do you want to cotinue (press y/y to continue) :");
		getchar();
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
}
//function define
int my_getword( char *str)
{
	int l;
	//length of string will be store in l
	l=strlen(str);
	return l;
}
//function define
int my_atoi( char *str)
{
	int sum=0;
	//if the value of str will be b/w 0-9 condition will be true
	while ( *str >= 48 && *str < 57 )
	{
		sum=sum*10+*str-'0';
		++str;
	}
	return sum;
}
//function define
int my_itoa( int num, char *str)
{
	int rem=0,i,x=num,len=0;
	char arr[50];
	//loop will terminate when 
	while(x != 0 )
	{
		++len;
		x=x/10;
	}
	for(i=0;i<len;i++)
	{
		rem = num % 10;
		num = num / 10;
		arr[len-(i+1)] = rem + '0';
	}
	arr[len]='\0';
	printf("string is : %s\n",arr);
}
