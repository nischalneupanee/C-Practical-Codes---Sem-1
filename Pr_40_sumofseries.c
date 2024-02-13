//program to find the sum of the series 1 + x2 + 3x2 + 4x2+.....+nx2.

#include<stdio.h>
#include<math.h>

void main()
{
    int n;
    float x,sum = 0.0;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    sum = 1 + pow(x,2);
    for (int i = 3; i <=n; i++)
    {
        sum += i * (pow(x,2));
    }
    printf("%.2f",sum);
}