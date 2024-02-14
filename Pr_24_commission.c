/*Jet Company gives 5% commission to its salesman if their monthly sales are less than Rs.
10,000 and a 10% commission if it is equal to or greater than Rs. 10,000. Write a program to
calculate commission at the end of the month.*/
#include<stdio.h>

void main()
{
    float sales,commission;
    printf("Enter the amount of the sales: ");
    scanf("%f",&sales);
    if(sales<10000)
    {
        commission = 0.05 * sales;
    }
    else
    {
        commission = 0.1 *sales;
    }
    printf("Your commission %.2f",commission);
}