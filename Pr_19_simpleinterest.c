#include<stdio.h>

void main()
{
    float balance, SI;
    printf("Enter the balance: ");
    scanf("%f",&balance);
    if(balance>99999)
    {
        SI = balance*0.07;
        printf("Simple Interest %.2f",SI);
    }
    else if(balance<100000 && balance>=50000)
    {
        SI = balance*0.05;
        printf("Simple Interest %.2f",SI);
    }

    else
    {
        SI = balance*0.03;
        printf("Simple Interest %.2f",SI);
    }
        
}