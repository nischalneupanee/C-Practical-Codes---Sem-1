/*Program to calculate discount. If purchased amount is greater than or equal to 1000,
discount is 5%.*/
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