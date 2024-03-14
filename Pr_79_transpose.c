//Program to read two-dimensional matrix and display its transposed form
#include<stdio.h>
#define ROW 20
#define COL 20

void main()
{
    int A[ROW][COL],B[ROW][COL],m,n;
    printf("ENter the dimension of matrix mxn:");
    scanf("%d %d",&m,&n);
    printf("Enter the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            B[i][j]=A[j][i];
        }
        
    }
    printf("The transpose matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
        
    }  
    
}