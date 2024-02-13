#include<stdio.h>
#include<math.h>

void main()
{
    int num;
    float sqrtn;
    printf("Enter the number:\t");
    scanf("%d",&num);
    sqrtn = sqrt(num);
    printf("The square root of %d is %.2f",num,sqrtn);
}