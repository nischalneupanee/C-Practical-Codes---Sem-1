#include<stdio.h>
#include<math.h>

float sum(int n, int x)
{
    float result = 0.0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result -= pow(x, i);
        }
        else
        {
            result += pow(x, i);
        }
    }
    return result;
}

void main()
{
    int n, x;
    printf("Enter the value of n and x:");
    scanf("%d %d", &n, &x);
    float result = sum(n, x);
    printf("Result = %f", result);
}
