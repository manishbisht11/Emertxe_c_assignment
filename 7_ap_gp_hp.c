/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : find AP GP and HP series.
Date : 5-may-2019
 */
#include<stdio.h>
int main()
{
	int a, n, d, i, b, c;
	float f;
	char opt;
	do
	{
		printf("Enter the first number :");
		scanf("%d",&a);
		//assigning the value of a into b and c
		b = c = a;

		printf("Enter the common difference/Ratio : ");
		scanf("%d",&d);

		printf("Enter the number of terms :");
		scanf("%d",&n);


		printf(" AP :");
		//loop will terminate when the value of i becomes greater than number of termes.
		for(i = 1; i <= n; i++)
		{
			printf("%d ",b);
			//adding first term with diffrence stored in b
			b = b + d;
		}
		printf("\n");

		printf(" GP :");
		//loop will terminate when the value of i becomes greater than number of termes.
		for(i = 1; i <= n; i++)
		{
			printf("%d ",c);
			//multiplying first term with diffrence stored in c
			c = c * d;
		}

		printf("\n");

		printf(" HP :");
		//loop will terminate when the value of i becomes greater than number of termes.
		for(i = 1; i <= n; i++)
		{
			//dividing first term
			f = 1 / (float)a;
			printf("%.2f ",f);
			//adding first term with diffrence and stored in a
			a = a + d;
		}
		printf("\n");
		getchar();
		printf("Do u want to continue( press y ) :");
		scanf("%c", &opt);
	}
	//loop will terminate if user value will be other than (Y or y).
	while(opt == 'Y' || opt == 'y');
	return 0;
}
