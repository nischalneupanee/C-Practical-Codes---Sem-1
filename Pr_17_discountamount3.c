#include<stdio.h>

void main()
{
    float amount,discount;
    printf("Enter the purchase amount: ");
    scanf("%f",&amount);
    if (amount>=5000)
    {
        discount = 0.1*amount;
        printf("Your discount is : %.2f",discount);
    }
    else if (amount>=4000 && amount<5000)
    {
        discount = 0.07*amount;
        printf("Your discount is : %.2f",discount);
    }
    else if (amount>=3000 && amount<4000)
    {
        discount = 0.05*amount;
        printf("Your discount is : %.2f",discount);
    }
    else if (amount>=2000 && amount<3000)
    {
        discount = 0.03*amount;
        printf("Your discount is : %.2f",discount);
    }
    else
    {
        discount = 0.02*amount;
        printf("Your discount is : %.2f",discount);
    }
    
    
}