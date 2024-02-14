/*Admission to a professional course is subject to the following conditions:
a)Marks in mathematics >= 60
b)Marks in physics >= 50
c)Marks in chemistry >= 40
d)Total in all three subjects >= 200
OR
Total in mathematics and physics >=150
Write a program to process the applications to list eligible candidate.*/
#include<stdio.h>

void main()
{
    int maths,phy,che;
    printf("Enter the marks of maths,phy,che:");
    scanf("%d%d%d",&maths,&phy,&che);
    if (maths>=60 && phy>=50 && che>=40)
    {
        printf("You are eligible");
    }
    else if ( maths+phy >=150)
    {
        printf("You are eligible");
    }
    else{
        printf("Your are not eligble");
    }
}