/*Write a program using switch statement to develop a simple calculator for +, -, *, /, and %
operators.*/
#include <stdio.h>

int main() {
    int num1, num2;
    float result;
    char oper, choice = 'y';

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    while (choice == 'y') {
        printf("Enter a - Addition , s - Subtraction , m - Multiplication , d - Division : ");
        scanf(" %c", &oper);

        switch (oper) {
            case 'a':
                result = num1 + num2;
                break;
            
            case 's':
                result = num1 - num2;
                break;
            
            case 'd':
                result = num1 / num2;
                break;
            
            case 'm':
                result = num1 * num2;
                break;
            
            default:
                printf("invalid choice!!!\n");
                break;
        }
        printf("Result = %.2f\n", result);

        printf("Enter y to continue or else to exit: ");
        scanf(" %c", &choice);
    }

    return 0;
}