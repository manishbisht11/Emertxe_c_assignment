/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : implement my_cp() function 
Date : 20-6-2019
 */
#include<stdio.h>
#include<stdlib.h>
int main( int argc, char *argv[])
{
	char choice;
	char ch;
	//file pointer
	FILE *f1;
	FILE *f2;
	FILE *f3;
	//file1 and file2 are for readable purpose
	f1=fopen(argv[1],"r");
	f2=fopen(argv[2],"r");
	//if arguments are greater than 4 conition will become false
	if (argc > 4)
	{
		printf("Invalid argumnets. Enter valid  argument\n");
		exit(0);
	}

	//if file1 will be empty condition will be true
	if (argc==1)
	{
		for( ; (ch=getchar()) != EOF; )
			putc(ch,stdout);
	}
	//condition will be true if there will be 3 arguments
	else if (argc==3)
	{
		//error checking
		if(f1 == NULL)
		{
			printf("File 1 is empty\n");
			exit(0);
		}
		if(f2 == NULL)
		{
			printf("File 2 is empty\n");
			exit(0);
		}
		for( ;( ch=getc(f1)) != EOF; )
			putc(ch,stdout);
		for( ; (ch=getc(f2)) != EOF; )
			putc(ch,stdout);
	}
	//condition will be true if there will be 4 arguments
	else if(argc==4)
	{
		//file 3 is opening for writing 
		f3=fopen(argv[3],"w+");
		//error checking
		if(f1 == NULL)
		{
			printf("File 1 is empty\n");
			exit(0);
		}
		if(f2 == NULL)
		{
			printf("File 2 is empty\n");
			exit(0);
		}

		//storing content of file 1 and file 2 into file 3
		for( ; (ch=getc(f1)) != EOF ;)
		{
			putc(ch,f3);
		}
		for( ;( ch=getc(f2) )!= EOF ;)
		{
			putc(ch,f3);
		}
		//closing file 3
		fclose(f3);	
	}
	else
		printf("Enter valid Arguents\n" );

	//closing file 1 & file 2
	fclose(f1);
	fclose(f2);
	return 0;
}
