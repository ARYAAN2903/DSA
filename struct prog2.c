//Author: Aryaan Sawant   Branch: IT  Roll no.: 50
//Write a C program to generate Pascal Triangle using array
#include <stdio.h>
int main()
{
    int pt[100][100], i, j, n, s; //declaration
    //Taking input from user
    printf("\nEnter the number of lines to be printed: ");
    scanf("%d", &n);

    printf("\n");   
    for (i = 1; i <= n; i++) //controls the no of rows
    {
        for (s = 0; s < n - i; s++) //loop to print spaces
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++) //controls the no of columns
        {
            if (j == 0 || j == i) //To print 1 at the start and end of every line
                pt[i][j] = 1;

            else
                pt[i][j] = pt[i-1][j-1] + pt[i-1][j]; //adds the numbers thats above and to it's right to print the element
            
            printf("%d ", pt[i][j]);
        }
        printf("\n");
    }    
}

