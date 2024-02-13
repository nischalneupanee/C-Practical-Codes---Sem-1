#include<stdio.h>
void main()
{
    char in;
    printf("Enter the input: ");
    scanf("%c",&in);

    switch (in)
    {
    case 'A':
    printf("EXCELLENT");
        break;
    
    case 'B':
    printf("Very Good");
        break;
    
    case 'C':
    printf("Good");
        break;
    
    case 'D':
    printf("Satisfactory");
        break;
    
    case 'E':
    printf("Fail");
        break;
    
    
    default:
        break;
    }
}