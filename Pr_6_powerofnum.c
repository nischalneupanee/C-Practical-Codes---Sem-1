#include<stdio.h>

 void main() {
    int num , pow, result=1;
    printf("Enter the number:\t");
    scanf("%d",&num);
    printf("Enter the exponent:\t");
    scanf("%d",&pow);
    while(pow!=0){
         result=result*num;
         --pow;
         }
    printf("==>%d",result);
 }