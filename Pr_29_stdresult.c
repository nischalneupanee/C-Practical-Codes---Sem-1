/*Given marks in five subjects. Write a program (a) to display “PASS” or “FAIL” if assumed
pass marks is 45 in each subject, (b) to find percentage of marks obtained, and (c) to find
division for “PASS” students assuming that 80% and above for “DISTINCTION”, 60% and
above for “FIRST DIVISION” otherwise “SECOND DIVISION”.*/
#include<stdio.h>

void main()
{
    float phy,percentage,maths,iit,cp,digital,total,division;
    printf("Enter the marks of phy,maths,iit,cp,digital: ");
    scanf("%f%f%f%f%f",&phy,&maths,&iit,&cp,&digital);
    total = phy+maths+iit+cp+digital;
    percentage = total/5;
    printf("Your percentage is %.2f",percentage);

    if(maths>=45 && phy>=45 && iit>=45 && cp>=45 && digital>=45)
    {
        printf("\nYou are passed");
        if (percentage>=80)
        {
            printf("\nYou got distinction");
        }
        else if (percentage>=60)
        {
            printf("\nYou got first division");
        }
        else
        {
            printf("\nYou got second division");
        }
        
    }
    else
    {
        printf("\nYou are failed");
    }

}