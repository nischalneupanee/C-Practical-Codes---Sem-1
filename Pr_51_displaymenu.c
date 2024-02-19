/*Write a program to display the following menu
a. To find area of circle
b. To check the given number is odd or even.
c. To find the sum of N numbers.
d. Exit.
Perform above task until the user wants to exit*/

#include<stdio.h>
#include<math.h>
#define PI 3.14

void main()
{
    int n,sum=0,r;
    char choice = 'y',opt;
    float area;
    while (choice == 'y')
    {
        printf("A - Area of circle O - odd or even S - sum of n numbers ");
        scanf(" %c",&opt);
        switch (opt)
        {
        case 'A':
            printf("Enter the radius of circle: ");
            scanf("%d",&r);
            area = PI*pow(r,2);
            printf("The area of circle is: %.2f\n cm2",area);
            break;
        case 'O':
            printf("Enter the Number: ");
            scanf("%d",&n);
            if (n%2==0)
            {
                printf("The number is even.\n");
            }
            else
            {
                printf("The number is odd.\n");
            }
            break;
        case 'S':
            printf("Enter the number: ");
            scanf("%d",&n);
            for (int i = 0; i < n; i++)
            {
                sum += i;
            }
            printf("Sum = %d",sum);
            break;
        
        default:
            printf("Invalid Input!!");
            break;
        }
        printf("Enter E to exit and y to continue: \n");
        scanf(" %c",&choice);
    }
    
}