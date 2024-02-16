//. Given an integer, write a program to check it for palindrome
#include <stdio.h>

void main()
{
    int num, rem, reverse = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    }

    if (num == reverse)
    {
        printf("The number is palindrome.");
    }
    else
    {
        printf("The number is not palindrome.");
    }
}