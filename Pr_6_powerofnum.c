//Program to find power of a given number. Hint: pow(a,b), a and b are user inputs.
#include<stdio.h>
#include<math.h>

 void main() {
    int num ,result,exp;
    printf("Enter the number:\t");
    scanf("%d",&num);
    printf("Enter the exponent:\t");
    scanf("%d",&exp);
    result = pow(num,exp);
    printf("==>%d",result);
 }