//Manish Bisht
//Emertxe
//Program to create a Magic sqaure
//11-07-2019

#include<stdio.h>
int main ()
{
	int row,col,n,i;
	char ch;
	do
	{
		printf ("Enter a iber to create a magic Square of\n");
		scanf ("%d",&n);
		int arr[n][n];
		//magic square is obtained for odd ibers so checking for condiation
		if (n % 2)
		{
			// 1st intialise row and col if n = 3, 1st element is placed in row = 2,col = 1
			row = n - 1;
			col = (n - 1 )/ 2;
			//add the iber in square using below condiation
			for (i=1;i<=n*n;i++)
			{
				//the loop runs till i = n * n i.e 9 for n =3;
				//when it enters loop row is 2 and col is 1 so arr[2][1] = 1 (which is i = 1 when it entered case);
				arr[row][col] = i;
				// increment the row and decrement the col now row = 3 and col = 0;
				row++;
				col--;
				//1st rule if row == n that is 3 if n is 3 then make row = row - 2,and col++ now row = 1 col = 1;
				if (i % n == 0)
				{
					row -= 2;
					col++;
				}
				// so next i = 2 is placed in arr[1][1]
				//row++ will be row = 2 and col-- will be col = 0;
				// i = 3 is kept in arr[2][0]
				//2nd rule if row == n that is row = 3 for n = 3 then make row = 0;
				else if (row == n)
				{
					row = 0;
				}
				//3rd rule if col is -1 then make col = n - 1 i.e col = 2 for n = 3;
				else if (col == -1)
				{
					col = n - 1;
				}
			}
			// printing the magic square
			for (row=0;row<n;row++)
			{
				for(col=0;col<n;col++)
				{
					printf ("%d\t",arr[row][col]);
				}
				printf ("\n");
			}
		}
		//if n =  even iber then comes to the else part 
		else
		{
			printf ("Magic square is not possible for even ibers\n");
		}
		printf ("Do you want to continue y/n ? \n");
		getchar ();
		scanf ("%c",&ch);
	}while (ch == 'y');

	return 0;
}

