/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : checking processor is little or big endian 
Date : 21-05-2019
 */
#include<stdio.h>
int main()
{
	int a;
	char num,opt;
	do
	{
	printf("Enter a Hexadecimal number : ");
	scanf("%x", &a);
	unsigned char *ch = (unsigned char *)&a;

//if the value store in adrress of ch is equals to a and 255 then condition will be true. 
	if ( *ch == (a & 0x000000FF))
		printf("processor is little endian \n");
	else
		printf("processor is big endian \n");
	getchar();
printf("Do you wnat to continue :");
scanf("%c",&opt);
	}while(opt == 'y' || opt == 'Y');
	return 0;
}
