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