/*Program that displays the temperatures from 0 degrees Celsius to 100 degrees Celsius and 
their Fahrenheit equivalent*/ 
#include<stdio.h>

void main()
{
    float celc,farh;
    printf("celc\tfarh\n");
    for (int i = 0; i <= 100; i++)
    {
        farh = i*(9/5)+32;
        printf("%dC = %.2fF\n",i,farh);
    }
    
}