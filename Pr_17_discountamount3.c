/*Program to calculate discount
a) If purchased amount is greater than or equal to 5000, discount is 10%
b) If purchased amount is greater than or equal to 4000 and less than 5000, discount is 7%
c) If purchased amount is greater than or equal to 3000 and less than 4000, discount is 5%
d) If purchased amount is greater than or equal to 2000 and less than 3000, discount is 3%
e) If purchased amount is less than 2000, discount is 2%*/
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