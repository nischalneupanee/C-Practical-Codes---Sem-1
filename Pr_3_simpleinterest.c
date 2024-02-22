//Program to find simple interest.#include<stdio.h>
#include<stdio.h>
void main()
{
    float principal,time, rate, SI;
    printf("Enter the principal:\t");
    scanf("%f",&principal);
    printf("Enter the time:\t");
    scanf("%f",&time);
    printf("Enter the rate:\t");
    scanf("%f",&rate);

    SI = (principal*time*rate)/100;
    printf("The simple interest is = %.2f",SI);
}