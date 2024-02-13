/*Program that calculates the sequence 1/1! + 2/2! + 3/3! +.....+ n/n, Where n is the number of 
input by the user */
#include<stdio.h>

void main()
{
    int n, fact =1;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for (int i = 1; i <=n ; i++)
    {
        fact = fact * i;
        sum =sum + (float)i/fact;
        
    }
    printf("The sum of sequence is %f",sum);
}
