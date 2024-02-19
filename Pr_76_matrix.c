//. Program to add two 3×2 matrices and print the result in matrix form.
#include<stdio.h>

void main()
{
    int a[3][2],b[3][2],add[3][2];
    printf("Enter A and B matrices:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);
            printf("B[%d][%d] =",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <2; j++)
        {
            add[i][j]= a[i][j] + b[i][j];
        }
        
    }

    for (int k = 0; k <3; k++)
    {
        for (int l = 0; l <2;l++)
        {
            printf("%d\t",add[k][l]);
        }
        printf("\n");
    }
    
    
}