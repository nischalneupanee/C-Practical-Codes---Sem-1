/*Program to print the largest number among three numbers input by the user.*/
#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter the numbers a b c:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("a is the greatest");
    }
    else if(b>a && b>c)
    {
        printf("b is the greatest");
    }
    else
    {
        printf("c is the greatest");
    }
}