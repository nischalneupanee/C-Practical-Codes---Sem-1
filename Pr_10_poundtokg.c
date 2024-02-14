//Program to convert pounds to kilograms.
#include<stdio.h>

void main()
{
    float pound,kg;
    printf("Enter the mass in pounds : ");
    scanf("%f",&pound);
    kg = pound / 2.205;
    printf("The mass in kg is %.2fkg",kg);
}