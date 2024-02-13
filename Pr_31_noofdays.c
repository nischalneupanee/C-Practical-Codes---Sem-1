// Program to display number of days in a month using switch statement.

void main()
{
    int month;
    char choice;
    printf("1.January 2.February 3.March\n 4.April 5.May 6.June\n 7.July 8.August 9.September\n 10.October 11.November 12.December");
    scanf("%c",month);
    while(choice == 'y')
    {
        
    switch (month)
    {
    case 1 :
        printf("31 days");
        break;
    
    case 2 :
        printf("28 or 29 days");
        break;
    
    case 3 :
        
        break;
    
    case 4 :
        break;
    
    case 5 :
        break;
    
    case 6 :
        break;
    
    case 7 :
        break;
    
    case 8 :
        break;
    
    case 9 :
        break;
    
    case 10 :
        break;
    
    case 11 :
        break;
    
    case 12 :
        break;
    
    default:
        printf("Invalid Input");
    }
    printf("Enter y to continue or else to exit");
    scanf(" %c",&choice);
    }

    
}