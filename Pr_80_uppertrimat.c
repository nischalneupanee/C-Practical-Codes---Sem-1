/*Program to convert a 4 × 4 matrix to upper triangular and display the result in matrix form*/
#include<stdio.h>
void main()
{
    int A[4][4],B[4][4],m,n;
    printf("Enter the 4x4 matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j<i)
            {
                A[i][j]=0;
            }
            
            
        }
        
    }
    printf("The upper triangular matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
        
    }
    
}