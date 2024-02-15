/*Program to find X of the following series for the given value of a and N.
X = a – a
2
/2 + a3
/3 – a
4
/4..................up to N.*/
#include<stdio.h>
#include<math.h>
void main()
{
     int a, n;
    double x = 0;

    printf("Enter the value of a and n:");
    scanf("%d%d", &a, &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            x += pow(a, i) / i;
        } else {
            x -= pow(a, i) / i;
        }
    }

    printf("X = %lf", x);

    
}