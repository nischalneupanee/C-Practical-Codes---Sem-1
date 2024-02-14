// Program to display number of days in a month using switch statement.
#include <stdio.h>
void main()
{
    int month;
    char choice = 'y';
    printf("1.January 2.February 3.March\n 4.April 5.May 6.June\n 7.July 8.August 9.September\n 10.October 11.November 12.December\n");
    printf("Enter the month: ");
    while (choice == 'y')
    {
        scanf("%d", &month);
        switch (month)
        {
        case 1:
            printf("31 days\n");
            break;

        case 2:
            printf("28 or 29 days\n");
            break;

        case 3:
            printf("31 days\n");
            break;

        case 4:
            printf("30 days\n");
            break;

        case 5:
            printf("31 days\n");
            break;

        case 6:
            printf("30 days\n");
            break;

        case 7:
            printf("31 days\n");
            break;

        case 8:
            printf("31 days\n");
            break;

        case 9:
            printf("30 days\n");
            break;

        case 10:
            printf("31 days\n");
            break;

        case 11:
            printf("30 days\n");
            break;

        case 12:
            printf("31 days\n");
            break;

        default:
            printf("Invalid Input\n");
        }
        printf("Enter y to continue or else to exit: ");
        scanf(" %c", &choice);
    }
}