//Program to convert a temperature given in Celsius to Fahrenheit.
#include<stdio.h>

void main()
{
    float celc,farh;
    printf("Enter the celc: ");
    scanf("%f",&celc);
    farh = celc*(9/5)+32;
    printf("%.2fC = %.2fF");
}