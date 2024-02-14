//Program to find price of n mangos given the price of a dozen mangos.
#include<stdio.h>
 
void main()
{
    int n, doz = 360, price;
    printf("Price of a dozen mango = Rs%d\n",doz);
    printf("Enter number of mangoes you want : ");
    scanf("%d",&n);
    price = (doz/12)*n;
    printf("Your total is Rs%d:",price);

}