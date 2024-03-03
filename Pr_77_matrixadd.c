/*Program that accepts the elements of 3 × 3 matrix and calculate the sum of all elements of
the matrix.*/
#include<stdio.h>

void main()
{
    int A[3][3],sum=0 ;
    printf("Enter the matrix a:\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            sum += A[i][j];
        }
        
    }
    printf("Sum =%d",sum);

    
    
}