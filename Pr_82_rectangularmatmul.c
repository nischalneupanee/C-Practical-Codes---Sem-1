/*Program to multiply two rectangular matrices and display the resultant matrix.*/
#include<stdio.h>
#define ROW 20
#define COL 20

void main()
{
     int A[ROW][COL], B[ROW][COL], C[ROW] [COL],i,j,k,m,n,p,q;
     Compact:
     printf("Enter the size of matrix A(mxn):");
     scanf("%d %d",&m ,&n);
     printf("Enter the size of matrix B(pxq):");
     scanf("%d %d",&p ,&q);
     
     //Check Compatiblity
     if(n==p)
     {
        for (int i = 0; i < m; i++)
        {
            for (int  j = 0; j < n; j++)
            {
                printf("A[%d][%d]=",i,j);
                scanf("%d",&A[i][j]);
            }
            
        }

        for (int i = 0; i < p; i++)
        {
            for (int  j = 0; j < q; j++)
            {
                printf("B[%d][%d]=",i,j);
                scanf("%d",&B[i][j]);
            }
            
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                int row_mul_col=0;
                for (int k = 0; k < n; k++)
                {
                    row_mul_col += A[i][k]*B[k][j];
                }
                C[i][j] =row_mul_col;
                
            }
            
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
     }
     else
     {
        printf("Enter the valid matrix dimension:\n");
        goto Compact;
     }
}