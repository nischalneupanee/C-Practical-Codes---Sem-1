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
                printf("Add = %.2f\n", result);
                break;
            
            case 's':
                result = num1 - num2;
                printf("Subtraction = %.2f\n", result);
                break;
            
            case 'd':
                result = num1 / num2;
                printf("Division = %.2f\n", result);
                break;
            
            case 'm':
                result = num1 * num2;
                printf("Multiplication = %.2f\n", result);
                break;
            
            default:
                printf("invalid choice!!!\n");
                break;
        }

        printf("Enter y to continue or else to exit: ");
        scanf(" %c", &choice);
    }

    return 0;
}