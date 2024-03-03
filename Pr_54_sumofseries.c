/*Program using function to calculate and return sum of following series up to n terms; where
x and n are supposed as passed by main program; sum = x-x
2
+x3
-x
4
+..…
*/
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
