/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : count the number of lines, words and characters 
Date : 6-6-2019
 */

#include<stdio.h>
int main()
{
	int nl = 0, nw = 0, nc = 0, ch;
	printf("Enter a string. Press cntr+D to print \n");
	//loop will terminate when user enter cntrl+D
	while((ch = getc(stdin)) != EOF)
	{
		++nc;
		//condition will be true if ch will be space
		if( ch == ' ' || ch == '\t')
		{
			++nw;
		}
		//condition will be true if ch will be enter(\0)
		if (ch == '\n')
		{
			++nl;
		   	++nw;
		}
	}
	printf("\nNumber of words are : %d\n",nw);
	printf("Number of characters are : %d\n",nc);
	printf("Number of lines are : %d\n",nl);
	return 0;
}
