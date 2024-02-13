#include<stdio.h>

void main()
{
    float discount,amount;
    printf("Enter the purchase amount: ");
    scanf("%f",&amount);
    if(amount>=1000)
    {
        discount = 0.05*amount;
        printf("Your discount amount is %.2f\n",discount);
    }
    else{
        printf("Your purchase amount is low - No Discount!!");
    }
}