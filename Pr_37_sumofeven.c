//Program to calculate sum of first 10 even number
#include<stdio.h>

void main()
{
    int sum=0;
   for (int i = 2; i <=20; i+=2)
   {
    sum += i;
   }
   printf("Sum = %d",sum);
}