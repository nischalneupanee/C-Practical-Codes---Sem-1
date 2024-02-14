/*Program to calculate discount. If purchased amount is greater than or equal to 1000,
discount is 5%. If purchased amount is less than 1000, discount is 3%.*/
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
        discount = 0.03*amount;
        printf("Your discount amount is %.2f\n",discount);
    }
}