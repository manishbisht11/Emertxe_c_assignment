/*
   Author Name : Manish Bisht
   Organization Name : Emertxe
Title : NRPS
Date : 25-06-2017
 */


#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, k, i, j;
    
    printf("Enter the length of string: ");
    scanf("%d", &n);
    char arr[n];
    
    /* boundary check */
    /* Error Check for limit */
    if ((n < 0) || (n > 11))
    {
        printf("Error: Invalid Number. Retry\n");
        return 1;
    }
    
    printf("Enter the number of character : ");
    scanf("%d", &k);
    /* Error Check for limit */
    if ((k < 1) || (k > 10))
    {
        printf("Error: Invalid Number. Retry\n");
        return 1;
    }
    
    printf("Enter the k disctint characters: \n");
    for (i = 0; i < k; i++)
    {
          scanf("\n%c", &arr[i]);
    }
    
    /* check for distinct characters */
    for (i = 0; i < k; i++)
    {
        for (j = (i+1); j < k; j++)
        {
            if(arr[j] == arr[i] )
            {
                printf("Error: values are not distinct.\n");
                return 1;
            }
        }
    }
    
	int val=0;

    for (i = 0; i < n; i++)
    {
        if(i%k == 0 && i != 0)
		{
			val++;
		}
        printf("%c", *(arr+((i+val)%k)));
    }
      return 0;
}
