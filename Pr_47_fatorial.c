//Program to find factorial of a number.
#include<stdio.h>
void main(){
    int num,count,fact=1; 
    printf("Enter the number: ");
    scanf("%d",&num);
    
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d",fact);
    
}