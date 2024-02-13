/*Rates of tax on gross salary are as shown below:
23. Income Tax
Less than 10,000 Nill
Rs. 10,000 to 19,999 10%
Rs. 20,000 to 39,999 15%
Rs. 40,000 to above 20%
Write a program to compute the net salary after deducting the tax for the given information*/
#include <stdio.h>

void main()
{
    int income = 0, initial;
    float tax = 0.0;
    printf("Enter the income: ");
    scanf("%d", &initial);
    if (initial < 10000)
    {
        printf("Your Tax amount = Nill");
    }
    else
    {
        income = initial - 10000;
        if (initial >= 10000 && initial <= 19999)
        {
            tax = 0.1 * income;
        }
        else
        {
            tax += 0.1 * 9999;
            income = income - 9999;
            if (initial >= 20000 && initial <= 39999)
            {
                tax += 0.15 * income;
            }
            else
            {
                tax += 0.15 * 19999;
                income = income -19999;
                tax += 0.2 * income;
            }
        }
    }
    printf("Your tax = %f",tax);
    float netinc = initial - tax;
    printf("Your net income ==%f",netinc);
}