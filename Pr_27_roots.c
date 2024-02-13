// Program to find the roots of a quadratic equation using discriminant.

#include<stdio.h>
#include<math.h>

void main()
{
    float a,b,c;
    printf("Enter a b c from the equation:  ");
    scanf("%f%f%f",&a,&b,&c);
    float discriminant = b*b - 4*a*c;
    if (discriminant >= 0) {
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Root 1: %f\n", root1);
        printf("Root 2: %f\n", root2);
    } 
    else {
        printf("The roots are imaginary.\n");
    }
    
}