/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : implement my_cp() function 
Date : 20-6-2019
 */
#include<stdio.h>
int main( int argc, char *argv[])
{
	char choice;
	char ch;
	//if the value of arguments are greater than 3 condition will be true
	if (argc > 3)
	{
		printf("Invalid argumnets. Enter only two argument\n");
		goto A1;	
	}
	//file pointer
	FILE *f;
	FILE *s;
	//open argv[1] for readable purpose, open argv[2] if file not exist
	f=fopen(argv[1],"r");
	s=fopen(argv[2],"w");
	//if file1 will be empty condition will be true
	if (f==NULL)
	{
		printf("File 1 is empty\n");
		goto A1;
	}
	else
	{
		//loop will terminate at the end of file
		for( ; (ch=getc(f)) != EOF; )
		{
			//putting character one by one in file2
			putc(ch,s);
		}
	}
	fclose(f);
	fclose(s);
A1:
	return 0;
}
