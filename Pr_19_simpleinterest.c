/*Program to calculate the simple interest.
a) If balance is greater than 99999, interest is 7 %.
b) If balance is greater than or equal to 50000 and less than 100000interest is 5 %.
c) If balance is less than 50000, interest is 3%.*/
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