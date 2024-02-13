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