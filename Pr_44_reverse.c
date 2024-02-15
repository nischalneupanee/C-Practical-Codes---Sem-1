//Given an integer, write a program to reverse and print it.
#include<stdio.h>

void main()
{
    int n,rem,reverse=0,count =0,temp;
    printf("Enter the number");
    scanf("%d",&n);
    temp = n;
    while (temp>0)
    {
        temp = temp/10;
        count++;
    }
    
    for(int i=0;i<count;i++)
    {
        rem = n%10;
        n = n/10;
        reverse = reverse*10 + rem;
    }
    printf("Reverse =%d",reverse);
}