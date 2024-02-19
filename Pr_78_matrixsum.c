//Program to read 4 × 4 matrix and find sum of each row.

#include<stdio.h>

void main()
{
    int a[4][4],sum=0;
    printf("Enter the 4x4 matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += a[i][j];
        }
        printf("Row%d sum =%d\n",i,sum);
        sum =0;
    }
    
    
}