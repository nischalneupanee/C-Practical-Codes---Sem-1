//Write a program to compute the sum of harmonic series up to num n
#include<stdio.h>


void main()
{
    int n;
    float sum =0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (int i = 1; i <=n ; i++)
    {
        sum += 1.0/(i);
    }
    printf("The sum of harmonic series is %f",sum);
    
}
