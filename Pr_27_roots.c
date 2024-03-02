//Program to find the roots of a quadratic equation using discriminant.

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(fabs(discriminant)) / (2 * a);
        printf("Roots are complex and imaginary: %.2lf + %.2lfi and %.2lf - %.2lfi\n",
               realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}