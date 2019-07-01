/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : Size of datatypes
Date : 20-05-2019
 */
#include<stdio.h>
int main()
{
	int num;
	char A;
	float num1;
	double a;
	unsigned int num2;
	long int num3;

	//size of int  
	printf("Size of int\t\t: %ld bytes\n",sizeof(int));
	//size of char 
	printf("Size of char\t\t: %zu bytes\n",sizeof(char));
	//size of float
	printf("Size of float\t\t: %zu bytes\n",sizeof(float));
	//size of double
	printf("Size of double\t\t: %zu bytes\n",sizeof(double));
	//size of unsigned int
	printf("Size of Unsigned int\t: %zu bytes\n",sizeof(unsigned int));
	//size of long int
	printf("Size of long int\t: %ld bytes\n",sizeof(long int));
	return 0;
}
